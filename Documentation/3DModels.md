<a href=".\Documentation.md">Go to Main Menu</a>

<h2>Importing and Tagging 3D Models</h2>

<p>Ok, so you have already prepared your <a href=".\PlanningDocuments.md">Planning Documents</a> and know exactly what Options the user will get to configure their home. Now, we need to assemble a scene in UE with all of the Meshes that represent the different parts of the house. There are two basic steps that need to be done in order to make this happen:</p>

1. Merge Meshes with the same OptionId
2. Tag Meshes in UE

<p>Let's go through each one:</p>

<h3>Merging Meshes with the same OptionId (Optional)</h3>

> This first step is optional but highly recommended.

<p>Each <strong>OptionId</strong> (see <a href=".\PlanningDocuments.md">Planning Documents</a>) represents a decision that the user will need to take in order to configure their home. Each decision changes either the <em>Material</em> or the <em>Visibility</em> of 1 or more Static Meshes. Because we need to tag Static Meshes with their respective <strong>Option Ids</strong> it makes everything easier to merge beforehand all the Static Meshes that correspond to an <option>Option Id</option>. This can be done in 3ds Max, Blender, Maya, or any other 3D graphics software.</p>
<p>For example, this is the Static Mesh for the outer, flat walls of the first floor of the Nabuko model:</p>

<img src=".\Images\UE_3dModels_ExtLis.png">

<p>As you can see, even though there are holes and empty spaces in there, all the walls have been merged together in a single Static Mesh.</p>

<p>The following picture shows the outer, grovved walls of the first floor of the Nabuko model, all merged together:</p>

<img src=".\Images\UE_3DModels_ExtEst.png">

<p>Building the model using pieces like these makes the following step much, much easier!</p>

<h3>Tagging Static Meshes</h3>

<p>UE needs to know which Meshes correspond to which Options for the user. This is done using a <em>Tagging</em> system. Any Static Mesh in the scene can have 0, 1 or more <strong>Tags</strong>. Each Tag adds information about the Static Mesh that is later used for configuration.</p>
<p>for example, this Static Mesh represents the ceiling of the second floor of the Nabuko model (excluding bathrooms):</p>

<img src=".\Images\UE_3DModels_Ceiling2ndFloor.png">

<p>This Static Mesh was tagged with the following <strong>Tags</strong>:</p>

<img src=".\Images\UE_3DModels_CeilingTags.png">

<p>As you can see, this Static Mesh has 3 <strong>Tags</strong>:</p>

- option_1
- section_3
- ceiling_3

<p>In the <a href=".\PlanningDocuments.md">Planning Documents</a> we established that:</p>

- option_1: This is an <strong>Option Id</strong> that represents a <strong>Material</strong> change for the flat, concrete, outer panels of the house
- section_3: This is a <strong>Section Id</strong> that means that this Static Mesh is part of the <strong>Second Half Floor</strong> of the model
- ceiling_3: This is a <strong>Ceiling Id</strong> that means that this Static Mesh is the ceiling of the <strong>Second Half Floor</strong> of the model

<p>Using these 3 <strong>Tags</strong>, the app is capable now of managing this Static Mesh correctly (changing its Material, showing it or hiding it, etc).</p>

<p>After placing all the Static Meshes on the Level, how do we add <strong>Tags</strong> to them?</p>

1. Select the Static Mesh in the Outliner.

<img src=".\Images\UE_3DModels_SelectMesh.png">

2. Go to the Search bar and write "Tag".

<img src=".\Images\UE_3DModels_SearchTag.png">

3. In the <strong>Actor</strong> section, click on the <em>Plus</em> button to add a new Tag.

<img src=".\Images\UE_3DModels_ActorTags.png">

4. Name the new <strong>Tag</strong> as desired.

<img src=".\Images\UE_3DModels_NameTag.png">

> Beware! The <strong>Tags</strong> that will be used are the ones in the <strong>Actor</strong> section. The <strong>Component Tags</strong> will all be ignored.

> Alternatively, you can also choose to tag your Static Meshes directly on Archicad or 3ds Max. If you import using Datasmith, the Tags should remain.

<p>Now you know how to Tag your Static Meshes on UE, you can either go back to the <a href=".\Documentation.md">Main Menu</a> or read about <a href=".\ConfigurationCameras.md">Configuration Cameras</a>.