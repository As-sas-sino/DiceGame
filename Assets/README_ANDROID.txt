--Requisiti--

Per compilare ed eseguire il progetto su dispositivi Android è necessario utilizzare Unity 6000.0.62f1 oppure versioni successive. È inoltre necessario che sia installato il modulo Android Build Support (SDK + NDK + OpenJDK). Servono uno o più dispositivi Android e un cavo USB per il collegamento al PC.
----------------------------------------------------------------------------------------------------------------------------------------------------------
--Apertura del progetto--

Aprire Unity Hub, selezionare il progetto e assicurarsi di aprirlo con Unity 6000.0.62f1 o successive. Attendere il completamento del caricamento prima di procedere.
----------------------------------------------------------------------------------------------------------------------------------------------------------
--Impostare la piattaforma Android-- 

	File → Build Profiles → Android → Switch Platform

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

