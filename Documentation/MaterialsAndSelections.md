<a href=".\Documentation.md">Go to Main Menu</a>

<h2>Materials And Selections</h2>

<p><em>Materials</em> and <em>Selections</em> have already been defined in the previous <a href=".\PlanningDocuments.md">Planning Documents</a> section. In this section, we will talk about how to configure their behavior inside of the UE app.</p>
<p>First, let us quickly go over a very important term that will be constantly used throughout this Documentation: <strong>Data Assets</strong>.</p>

<h3>Data Assets</h3>

<p><em>Data Assets</em> are how we store data inside of UE. The cool thing about them is that we can define completely how the Configurator behaves by just changing <em>Data Assets</em>, without touching a single line of code. Setting up the app requires you do the following simple steps:</p>

1. Import all 3D models
2. Set up the scene with the 3D models
3. Set up Cameras inside the scene
4. Tag all Meshes and Cameras
5. Configure the appropriate <em>Data Assets</em>

<p>We will take a look at the last point and see how to create and configure <em>Data Assets</em> inside of Unreal Engine 5. So, how can I create a new <em>Data Asset</em>?</p>

<p>First, open the ContentDrawer using <code>Ctrl + Space</code> (or by clicking the tab at the bottom of the screen):</p>

<img src=".\Images\UE_ContentDrawer.png">

<p>Then, navigate the menu to get to the folder where you want to create a new <em>Data Asset</em>:</p>

<img src=".\Images\UE_NavigateMenu.png">

<p>Press <code>Right Click</code> on the Mouse and select <em>Miscellaneous\DataAsset</em> from the menu:</p>

<img src".\Images\UE_DataAssetCreation.png">

<p>Select which type of <em>Data Asset</em> you want to create:</p>

<img src=".\Images\UE_DataAssetMenu.png">

<p>Name your newly created <em>Data Asset</em> properly:</p>

<img src=".\Images\UE_NamingDataAssets.png">

<p>Double click on the <em>Data Asset</em> to open it:</p>

<img src=".\Images\UE_OpenDataAsset.png">

<p>You're now ready to configure your new <em>Data Asset</em>!</p>