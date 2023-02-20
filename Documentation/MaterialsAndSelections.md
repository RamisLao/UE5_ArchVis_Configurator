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

***

<p>Now, we will go through some very special DataAssets that we can use to determine how <em>Materials</em> and <em>Selections</em> will work in the app:</p>

<h3>DataAssets for Materials</h3>

<p>You will find these <em>Data Assets</em> in <code>Content\Kambio\DataAssets\Materials</code>:</p>

<img src=".\Images\UE_Materials_Folder.png">

<p>We'll go through each one to know what they contain:</p>

<h4>DA_MaterialIdToColor</h4>

<img src=".\Images\UE_Materials_MaterialIdToColor.png">

<p>This Data Asset maps <strong>Material Ids</strong> (see <a href=".\PlanningDocuments.md">Planning Documents</a>) to a string that represents their <strong>Color</strong>. These <strong>Colors</strong> are human-readable strings and are used in the UI.</p>

<h4>DA_MaterialIdToType</h4>

<img src=".\Images\UE_Materials_MaterialIdToType.png">

<p>This Data Asset maps <strong>Material Ids</strong> (see <a href=".\PlanningDocuments.md">Planning Documents</a>) to a string that represents their <strong>Material Type</strong>. A <strong>Material Type</strong> is simply what the <strong>Material</strong> is made of. It could be <em>wood</em>, <em>cement</em>, <em>steel</em>, <em>brick</em>, etc. These <strong>Material Types</strong> are human-readable strings and are used in the UI.</p>

<h4>DA_MaterialIdToMaterialInstance</h4>

<img src=".\Images\UE_Materials_MaterialIdToMaterialInstance.png">

<p>This Data Asset maps <strong>Material Ids</strong> (see <a href=".\PlanningDocuments.md">Planning Documents</a>) to Unreal Engine's <strong>Material Instances</strong>. A <strong>Material Instance</strong> is a type of asset that you can place on static meshes to apply a look and feel to them. These <strong>Material Instances</strong> are the ones being used by the user to <em>configure</em> their home.</p>

<h4>DA_MaterialIdToUIMaterial</h4>

<img src=".\Images\UE_Materials_MaterialIdToUIMaterial.png">

<p>This Data Asset maps <strong>Material Ids</strong> (see <a href=".\PlanningDocuments.md">Planning Documents</a>) to a special type of <em>Material Instance</em> that can be applied to UI objects. The idea is to create a <strong>Material</strong> that looks as similar as possible to the one being applied to Meshes, but that is simplified enough to look good on UI.</p>

***

<h3>DataAssets for Selections</h3>

<p>You will find these <em>Data Assets</em> in <code>Content\Kambio\DataAssets\Selections</code>:</p>

<img src=".\Images\UE_Selections_Folder.png">

<h4>DA_SelectionIdToName</h4>

<img src=".\Images\UE_Selections_SelectionIdToName.png">

<p>This Data Asset maps <strong>Selection Ids</strong> (see <a href=".\PlanningDocuments.md">Planning Documents</a>) to a human-readable string that is used to represent the type of selection in the UI.</p>

<h4>DA_SelectionIdToVisibility</h4>

<img src=".\Images\UE_Selections_SelectionIdToVisibility.png">

<p>This Data Asset maps <strong>Selection Ids</strong> (see <a href=".\PlanningDocuments.md">Planning Documents</a>) to the <strong>Visibility</strong> of the Meshes that have been paired up with that <strong>Selection Id</strong>. Visibility is the way the app shows to the user if an object is being included or not in the final design.</p>

***

Now that you know everything about DataAssets related to Materials and Selections, you can either go back to the <a href=".\Documentation.md">Main Menu</a> or read about <a href=".\3DModels.md>Importing and Tagging 3D Models</a>.