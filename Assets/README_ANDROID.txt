--Requisiti--

Per compilare ed eseguire il progetto su dispositivi Android è necessario utilizzare Unity 6000.0.62f1 oppure versioni successive. È inoltre necessario che sia installato il modulo Android Build Support (SDK + NDK + OpenJDK). Servono uno o più dispositivi Android e un cavo USB per il collegamento al PC.

⚠ Il progetto NON include una Google API Key né un Fusion App ID valido per motivi di sicurezza. È necessario configurarli manualmente (vedere sezioni sotto).
----------------------------------------------------------------------------------------------------------------------------------------------------------
--Configurazione Google API Key (Cloud Anchor)--

Il progetto utilizza Google ARCore Cloud Anchor per sincronizzare il tavolo AR tra dispositivi.

Per configurarla:

	1) Accedere a Google Cloud Console:
	  https://console.cloud.google.com/

	2) Creare un nuovo progetto.

	3) Abilitare le API:
		- ARCore API
		- Cloud Anchor API

	4) Andare in:
		- API & Services → Credentials → Create Credentials → API Key

	5) Cliccare su "Restrict Key" e impostare:
		  Application restrictions:
			- Android apps
			- Inserire:
				- Package name del progetto Unity: 
					- Si trova in Unity in:
						- Edit → Project Settings → Player → Android → Package Name
				- SHA-1 fingerprint del certificato:
					- Per ottenerlo collegare il dispositivo Android al PC e digitare nel terminale:
						- keytool -list -v -keystore "%USERPROFILE%\.android\debug.keystore" -alias androiddebugkey -storepass 							  android -keypass android
						- Verrà mostrata una voce chiamata: SHA1:
						- Copiare il valore e incollarlo nella configurazione Google Cloud.
			- API restrictions:
				- Selezionare solo ARCore API

	6) Aprire Unity e andare in:
		- Project Settings → ARCore Extensions

	7) Inserire la nuova API Key nel campo:
		- Cloud Anchor API Key

Senza questa configurazione le Cloud Anchor non funzioneranno.
----------------------------------------------------------------------------------------------------------------------------------------------------------
--Configurazione Fusion App ID (Multiplayer)--

Il progetto utilizza Photon Fusion per il multiplayer.

Per configurarlo:

	1) Creare un account su:
	   https://dashboard.photonengine.com/

	2) Creare una nuova App di tipo Fusion.

	3) Copiare il nuovo App ID generato.

	4) In Unity aprire:
		- Metodo consigliato:
			- In Unity: Tools → Fusion → Fusion Hub
			- Nella finestra Fusion Hub incollare il nuovo App ID nel campo dedicato e salvare.
		- Oppure manualmente:
			- Fusion → Network Project Config
		  	  oppure selezionare il file:
			- Assets/Photon/Fusion/Resources/NetworkProjectConfig.asset

	5) Inserire il nuovo App ID nel campo:
		- App Id

Senza un App ID valido il multiplayer non funzionerà.
----------------------------------------------------------------------------------------------------------------------------------------------------------
--Apertura del progetto--

Aprire Unity Hub, selezionare il progetto e assicurarsi di aprirlo con Unity 6000.0.62f1 o successive. Attendere il completamento del caricamento prima di procedere.
----------------------------------------------------------------------------------------------------------------------------------------------------------
--Impostare la piattaforma Android-- 

	- File → Build Profiles → Android → Switch Platform

Attendere che Unity completi lo switch di piattaforma prima di continuare.
----------------------------------------------------------------------------------------------------------------------------------------------------------
--Preparare il dispositivo Android-- 

Sul dispositivo Android:

	1) Abilitare la Modalità sviluppatore:
		- Andare in Impostazioni → Info sul telefono
		- Toccare 7 volte su “Numero build”

	2) Abilitare il Debug USB nelle Opzioni sviluppatore.

	3)  Collegare il dispositivo al PC tramite cavo USB.

	4) Accettare eventuali richieste di autorizzazione Debug sul dispositivo.
------------------------------------------------------------------------------------------------------------------------------------------------------------Configurare Host e Client--

Per poter giocare è necessario installare:
	- 1 dispositivo come Host		
	- Tutti gli altri dispositivi come Client

Procedura:

	1) Aprire la scena: DiceGameSceneMultiplayer

	2) Nella Hierarchy selezionare: FusionNetworkManager

	3) Nell’Inspector individuare la voce Auto Mode e impostare:
		- Host per il dispositivo principale
		- Client per tutti gli altri dispositivi

	4) Salvare la scena premendo: Ctrl + S
------------------------------------------------------------------------------------------------------------------------------------------------------------Build e installazione--

Per compilare e installare l’app sul dispositivo collegato premere: Ctrl + B
oppure utilizzare: File → Build Profiles → Android → Build And Run

Unity genererà e installerà automaticamente l’app sul dispositivo connesso.
------------------------------------------------------------------------------------------------------------------------------------------------------------Installazione su più dispositivi--

	1) Impostare correttamente Auto Mode (Host o Client).

	2) Salvare la scena.

	3) Collegare il nuovo dispositivo via USB.

	4) Premere Ctrl + B.
------------------------------------------------------------------------------------------------------------------------------------------------------------Note importanti-- 

	Tutti i dispositivi devono essere connessi alla stessa rete WiFi.

	Il dispositivo configurato come Host deve essere avviato per primo. L’Host serve esclusivamente per posizionare il tavolo AR e avviare la partita. 	I dispositivi Client devono essere avviati successivamente.

