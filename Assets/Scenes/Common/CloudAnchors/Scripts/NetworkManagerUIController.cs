//-----------------------------------------------------------------------
// <copyright file="NetworkManagerUIController.cs" company="Google">
//
// Copyright 2019 Google LLC. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// </copyright>
//-----------------------------------------------------------------------

namespace Google.XR.ARCoreExtensions.Samples.CloudAnchors
{
    using System.Collections.Generic;
    using UnityEngine;
    using Mirror;
    using UnityEngine.SceneManagement;
    using UnityEngine.UI;

    /// <summary>
    /// Controller managing UI for starting/stopping host and client using Mirror.
    /// This replaces UNet matchmaking-based UI with a simple host/client flow.
    /// </summary>
    [RequireComponent(typeof(CloudAnchorsNetworkManager))]
    public class NetworkManagerUIController : MonoBehaviour
    {
        /// <summary>
        /// The Cloud Anchors Example Controller.
        /// </summary>
        public CloudAnchorsController CloudAnchorsController;

        /// <summary>
        /// The Network Manager (must derive from Mirror.NetworkManager).
        /// </summary>
        private CloudAnchorsNetworkManager m_Manager;

        /// <summary>
        /// Optional UI elements (wire in Inspector).
        /// </summary>
        [Header("UI (optional)")]
        public InputField addressInput;   // IP or hostname to join
        public Button hostButton;
        public Button joinButton;
        public Button stopButton;

        /// <summary>
        /// Local cached room number (if needed by UI).
        /// </summary>
        private string m_CurrentRoomNumber;

        /// <summary>
        /// Awake: cache manager and hook UI buttons if set.
        /// </summary>
        public void Awake()
        {
            m_Manager = GetComponent<CloudAnchorsNetworkManager>();

            if (hostButton != null)
            {
                hostButton.onClick.AddListener(StartHost);
            }

            if (joinButton != null)
            {
                joinButton.onClick.AddListener(StartClientFromUI);
            }

            if (stopButton != null)
            {
                stopButton.onClick.AddListener(StopNetwork);
            }
        }

        /// <summary>
        /// Start hosting (server + client).
        /// </summary>
        public void StartHost()
        {
            if (m_Manager == null)
            {
                MessageHandler.instance.ShowMessage("Network manager not found.");
                return;
            }

            MessageHandler.instance.ShowMessage("Starting host...");
            m_Manager.StartHost();
            // Notify CloudAnchors controller to switch to hosting mode.
            CloudAnchorsController?.OnEnterHostingMode();
        }

        /// <summary>
        /// Start client using the address present in the input field (or default manager address).
        /// </summary>
        public void StartClientFromUI()
        {
            if (m_Manager == null)
            {
                MessageHandler.instance.ShowMessage("Network manager not found.");
                return;
            }

            string addr = m_Manager.networkAddress;
            if (addressInput != null && !string.IsNullOrEmpty(addressInput.text))
            {
                addr = addressInput.text.Trim();
                m_Manager.networkAddress = addr;
            }

            MessageHandler.instance.ShowMessage($"Connecting to {addr}...");
            m_Manager.StartClient();
            // Notify CloudAnchors controller to switch to resolving mode.
            CloudAnchorsController?.OnEnterResolvingMode();
        }

        /// <summary>
        /// Stop host or client and reload scene to reset state.
        /// </summary>
        public void StopNetwork()
        {
            if (m_Manager == null)
            {
                MessageHandler.instance.ShowMessage("Network manager not found.");
                return;
            }

            if (NetworkServer.active && NetworkClient.isConnected)
            {
                // We are host
                m_Manager.StopHost();
            }
            else if (NetworkClient.isConnected)
            {
                m_Manager.StopClient();
            }
            else if (NetworkServer.active)
            {
                m_Manager.StopServer();
            }

            MessageHandler.instance.ShowMessage("Network stopped.");
            // Optionally reload the CloudAnchors scene to reset state.
            SceneManager.LoadScene("CloudAnchors");
        }

        /// <summary>
        /// Legacy methods from UNet (matchmaking) removed.
        /// The project uses direct host/join flow via Mirror.
        /// </summary>

        #region Backwards-compatible stubs (no-op)

        // If other parts of the project call these older methods, you can either:
        // - Update those callers to call StartHost/StartClientFromUI/StopNetwork, or
        // - Add adapter methods here to translate calls.
        // For now we keep no-op placeholders to avoid missing-method compile errors.

        public void StartGame()
        {
            // kept for compatibility - start host by default
            StartHost();
        }

        #endregion


                #region Compatibility methods for CloudAnchorsController

        /// <summary>
        /// Displays a debug message in the console (used by CloudAnchorsController).
        /// </summary>
        public void ShowDebugMessage(string message)
        {
            if (MessageHandler.instance != null)
            {
                MessageHandler.instance.ShowMessage(message);
            }
            else
            {
                Debug.Log($"[NetworkManagerUI] {message}");
            }
        }

        /// <summary>
        /// Called when an anchor is hosted.
        /// </summary>
        public void OnAnchorHosted(bool success, string info)
        {
            string msg = success
                ? $"✅ Anchor successfully hosted: {info}"
                : $"❌ Failed to host anchor: {info}";

            if (MessageHandler.instance != null)
                MessageHandler.instance.ShowMessage(msg);
            else
                Debug.Log(msg);
        }

        /// <summary>
        /// Called when an anchor is resolved.
        /// </summary>
        public void OnAnchorResolved(bool success, string info)
        {
            string msg = success
                ? $"✅ Anchor successfully resolved: {info}"
                : $"❌ Failed to resolve anchor: {info}";

            if (MessageHandler.instance != null)
                MessageHandler.instance.ShowMessage(msg);
            else
                Debug.Log(msg);
        }

        #endregion



        // --- Metodi placeholder per compatibilità con CloudAnchorsController ---

public void OnAnchorInstantiated(bool isHost)
{
    // In futuro puoi aggiornare la UI qui se necessario
    MessageHandler.instance.ShowMessage(
        isHost ? "Anchor instantiated (host)" : "Anchor instantiated (client)");
}



    }
}
