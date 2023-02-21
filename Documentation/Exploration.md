<a href=".\Documentation.md">Go to Main Menu</a>

<h2>Exploration</h2>

<p>There is a specific setup that you need to do in order for the Exploration Mode to work. In Exploration Mode, the user is able to move freely between cameras, by rotating their view and pressing left click when they want to move forward. For this to work, you need to prepare each Camera involved so that they know which Cameras are available to move to.</p>

<p>Cameras that are not currently being used do not spend computational resources, so it makes sense to add specific cameras for Exploration purposes. For Nabuko, a specific folder was created with all the Cameras inside of it:</p>

<img src=".\Images\UE_Exploration_Folder.png">

<p>If you select a Camera from the folder and go to the Default section, you will see the options that we ignored when we talked before about Cameras:<p>

<img src=".\Images\UE_Exploration_Default.png">

<p>You need to define the Path that the user can take by setting up which Cameras will be in <em>Front</em>, <em>Back</em>, <em>Left</em>, and <em>Right</em> from it. You may leave some of this variables empty, but every Camera that will be used for Exploration must have at least one camera to move to.</p>

***

Now that you know how to set up a Path for Exploration Mode, you can go back to the <a href=".\Documentation.md">Main Menu</a>!