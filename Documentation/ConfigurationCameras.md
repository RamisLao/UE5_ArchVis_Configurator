<a href=".\Documentation.md">Go to Main Menu</a>

<h2>Configuration Cameras</h2>

<p>Your Level in UE will be made basically of 2 different types of objects:</p>

1. Static Meshes
2. Cameras

<p>We already talked about how to configure Static Meshes in UE. Now, we will talk about how to place <strong>Cameras</strong> and configure them.</p>
<p>First, of all, let's take a look at the types of cameras we have:</p>

<img src=".\Images\UE_Cameras_Folder.png">

<p>If you go to <code>Content\Kambio\Blueprints\Cameras</code> you can see that there are 4 different types of cameras:</p>

- <strong>BP_CustomCamera</strong>: Base Blueprint from which Static and Orbit cameras inherit. It contains some common code that we will see later.
- <strong>BP_MapCamera</strong>: Used to capture the 3D scene and convert it into a 2D texture that can be used to display Maps of the Level.
- <strong>BP_OrbitCamera</strong>: This camera rotates in a circle around a specified object, always looking directly at it.
- <strong>BP_StaticCamera</strong>: This camera stays in place and is able to look around by rotating horizontally and vertically.

<p>The 2 types of cameras that you will need to place manually on the Level are <strong>Orbit</strong> and <strong>Static</strong> Cameras.</p>

<p>For the <strong>Configuration</strong> phase, each time the user goes to a new panel, the app will take them to the best view possible for them to see the decisions they're making. You will be responsible for choosing those views. Follow the next steps to do so:</p>

1. Drag an Orbit or a Static Camera from the Content Browser to the Level.
2. Right Click on the newly placed Camera either in the Viewport or in the Outliner.

<img src=".\Images\UE_Cameras_Pilot.png">

3. Select the <strong>Pilot</strong> option in the menu.
4. Move the Camera around by holding down the Right Button of the Mouse and using <code>AWSD</code> on the keyboard.
5. Once the Camera is in the ideal position, click on this button (at the top of the viewport):

<img src=".\Images\UE_Cameras_StopPilot.png">

***

<p>Now that your Camera is in the right position, you need to configure some options on it:

1. First, go the Search Bar, type <em>Tag</em> and add the Tag that you chose for this camera while creating your <a href=".\PlanningDocuments.md">Planning Documents</a>.

<img src=".\Images\UE_Cameras_Tag.png">

2. Then, type <em>Default</em> on the Search Bar to get the custom options for the Camera:

<img src=".\Images\UE_Cameras_Default.png">

3. Customize the Camera using the options. Each option does the following:

- <em>Rotation Speed</em>: How fast does this Camera rotates when moving the Mouse or the finger on the screen.
- <em>Meshes to Hide</em>: If Static Meshes are added to this array, whenever this Camera is the Point of View for the user, those Static Meshes will be hidden. This is useful when you need a very specific POV but there are non-useful Meshes in the way.
- <em>Section Id</em>: Which <strong>Section Id</strong> (as defined in the <a href=".\PlanningDocuments">Planning Documents</a>) contains this Camera.
- <em>Will be in Sequence</em>: If True, this Camera will be used to create Cinematic sequences for the user to enjoy their home.
- <em>Camera Forward</em>, <em>Camera Right</em>, <em>Camera Back</em>, <em>Camera Left</em>: These options will be discussed in <a href=".\Exploration.md">Create an Exploration Path</a>.

<p>If the camera you're configuring is an <strong>Orbit Camera</strong>, you will also get this option:</p>

<img src=".\Images\UE_Cameras_OrbitDefault.png">

- <em>Target Actor</em>: This is the Actor in the Level that the Camera will circle around and look directly.

***

<p>Now that you know how to Configure your Cameras, you can either go back to the <a href=".\Documentation.md">Main Menu</a> or read about <a href="ConfigurationDataAssets.md">Configuration DataAssets</a>.</p>