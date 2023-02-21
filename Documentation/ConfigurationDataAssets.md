<a href=".\Documentation.md">Go to Main Menu</a>

<h2>Configuration DataAssets</h2>

<p>Each time you configure a new project, you need to create a series of DataAssets that are unique for each model. Due to the fact that they're unique per model, you will need to create them inside a specific folder for your new project.</p>
<p>For example, the DataAssets for the Nabuko model can be found in <code>\Content\Kambio\Nabuko\DataAssets</code>:</p>

<img src=".\Images\UE_ConfigDA_Folder.png">

<p>You will need to configure 3 types of DataAssets:</p>

- General
- Panels
- Sections

<p>Let's go through each one.</p>

***

<h3>General DataAssets</h3>

<p>There are 4 DataAssets that you need to create for the General section:</p>

<img src=".\Images\UE_ConfigDA_General.png">

<h4>DA_ConfigDefaults</h4>

<img src=".\Images\UE_ConfigDA_Defaults.png">

<p>This is a list of the default values for the <strong>Options</strong> that will be available to the user. Every time a new Configuration Session starts, all the Static Meshes will be set up using this list.</p>

<h4>DA_ConfigCurrent</h4>

<img src=".\Images\UE_ConfigDA_Current.png">

<p>A new <em>DA_ConfigCurrent</em> will be created for each user configuring this model. This list will store all the decisions that the user has made. If they Configuration Session is new, this list will be empty; if it's not new, then this list will be filled up with the decisions the user has already made.</p>

<h4>DA_OptionIdToOptionType</h4>

<img src=".\Images\UE_ConfigDA_OptionIdToOptionType.png">

<p>Until now, you might have realized that all the configurations we have made have used nothing but strings. This is not super reliable, as people are prone to mistakes and might end up making several typos. That's the reason why there is a DataAsset to map <strong>Option Ids</strong> to <strong>Option Types</strong>. <strong>Option Types</strong> is an enumerator. That means that, instead of writing a string down, you will need to choose an <strong>Option Type</strong> from the list available.</p>
<p>As you can see on the left, we have a list of all the <strong>Option Ids</strong> that we defined on our <a href=".\PlanningDocuments.md">Planning Documents</a>. In our Configuration Ids Spreadsheet, we defined whether an <strong>Option Id</strong> would be used to configure a Material or a Selection. In this DataAsset you simply need to make that explicit to UE.</p>

<h4>DA_ConfigGameplay</h4>

<img src=".\Images\UE_ConfigDA_Gameplay.png">

<p>This DataAsset has general options that are used throughout the app.</p>

***

<h3>Sections DataAssets</h3>

<img src=".\Images\UE_ConfigDA_Sections.png">

<p>Let's go through the Sections folder first. There are 3 types of DataAssets in this folder:</p>

<h4>DA_ConfigSections</h4>

<img src=".\Images\UE_ConfigDA_ConfigSections.png">

<p>This DataAsset is just a place where you store references to the other 2 kinds of Section DataAssets. UE will use the DataAssets stored in here to configure the behavior of the app.</p>

<h4>DA_SectionIdToIgnoreInCameraMapIds</h4>

<img src=".\Images\UE_ConfigDA_SectionIdToIgnore.png">

<p>This DataAsset is used by the app to decide which Static Meshes to hide in the Map according to the <strong>Section Id</strong> of the current camera. You need to create 1 DataAsset of this type for each <strong>Section Id</strong> in your project.</p>
<p>The variable <em>Section Id</em> refers to one of the Sections in your Level. The variable <em>Ignore in Camera Map Ids</em> is a list of all the Tags that will be hidden in the Map when the user is inhabiting a Camera in <em>Section Id</em>.</p>

<h4>DA_VariationIdToSectionIds</h4>

<img src=".\Images\UE_ConfigDA_VariationIdToSectionIds.png">

<p>This DataAsset is used by the app to decide which Static Meshes should be visible and which ones should be hidden according to the <strong>Variation Id</strong> that the user selected.</p>

***

<h3>Panels DataAssets</h3>

<img src=".\Images\UE_ConfigDA_Panels.png">

<p>These DataAssets are the ones that define how the UI is going to be generated while using the app. The UI is generated every time we hit play, because we need it to be very flexible in case we want to change a Configuration Option. These DataAssets define how the UI will work.</p>

<h4>DA_SwitcherPanelCollection</h4>

<img src=".\Images\UE_ConfigDA_SwitcherPanelCollection.png">

<p>This DataAsset contains a list of all the panels that will be shown to the user for them to configure their home. This Panels are DataAssets of type <em>PDA_SwitcherPanel</em>.</p>

<h4>DA_ActiveInfluences</h4>

<img src=".\Images\UE_ConfigDA_ActiveInfluences.png">

<p>This DataAsset contains a list of all the active <em>Influences</em> that are being used. <em>Influences</em> are explained below. For now it suffices to know that each <em>Influence</em> is of type <em>PDA_Influence</em>.</p>

<h4>PDA_SwitcherPanel</h4>

<img src=".\Images\UE_ConfigDA_SwitcherPanel.png">

<p><em>Switcher Panels</em> represent each one of the Panels that the user will encounter on their configuration journey. Let's go through each one of the variables to understand how to set it up:</p>

- Header: This is the name that will appear at the top of the Panel. It describes a group of decisions that the user will need to make.
- Description: This is shown on the Panel, right below the Header.
- Camera Tag: This is the Tag of the Camera that will be used every time the user selects this Panel.
- Can Rotate Camera: If true, the user is able to rotate the camera; if false, the camera will be static.
- DA Scroll Panels: This is a list of the Scroll Panels that will be shown on the Panel. To know more about Scroll Panels, keep reading.

<h4>PDA_ScrollPanel</h4>

<img src=".\Images\UE_ConfigDA_ScrollPanel.png">

<p><em>Scroll Panels</em> represent each one of the decisions that the user will need to make. In order words, there's 1 <em>Scroll Panel</em> for each <em>Option Id</em>. We'll show the user 2 or more options so that they can choose what's more convenient to them. So, each <em>ScrollPanel</em> contains 2 or more Buttons that represent each option. We'll take a look at the button below. For now, let's check the variables in each <em>ScrollPanel</em>:</p>

- Header: This is the title of the Scroll Panel. It's a human-readable name for object or group of objects that the user is about to configure.
- Option Ids: A list of the Option Ids that will be affected by this decision. How could there be more than one? For example, in the Nabuko model the user gets to choose the color and material of the exterior walls of the house. But the exterior walls are made up of flat and grooved walls. So, the user chooses the same color for both types of walls, but they actually need different Materials to be applied to them.
- Items: A list of all the options that the user will get. Each option is represented as a type of Button. We'll take a look at Buttons below.
- Option Id for Naming: Because a Scroll Panel may be influencing more than 1 Option Id, this variable makes explicit which Option Id will be used to get human-readable strings (color, material type, selection type, etc) for the UI.

<h4>Items</h4>

<img src=".\Images\UE_ConfigDA_Items.png">

<p><em>Items</em> represent each one of the options that the user will be able to select to configure an <em>Option Id</em>. In the UI, these are represented as vertical buttons with some text on them. A <em>Scroll Panel</em> contains 2 or more <em>Items</em>.<p>
<p>There are 4 different types of <em>Items</em>. Each one of them represents a different type of option. Let's take a look at each one:</p>

<h5>PDA_ItemMaterialId</h5>

<img src=".\Images\UE_ConfigDA_ItemMaterial.png">

<p>This type of <em>Item</em> only needs a <strong>Material Id</strong>. When it is selected, it takes all of the <em>Option Ids</em> in the owning <em>Scroll Panel</em>, finds the Static Meshes that point to it, and applies that Material to them.</p>

<h5>PDA_ItemOptionIdToMaterialId</h5>

<img src=".\Images\UE_ConfigDA_OptionIdToMaterialId.png">

<p>This type of <em>Item</em> includes a Dictionary from <strong>Option Ids</strong> to <strong>Material Ids</strong>. When selected, it goes through each <strong>Option Id</strong> in the Dictionary and applies the corresponding Material to all Static Meshes that have been tagged with it.</p>

<h5>PDA_ItemOptionIdToOptionId</h5>

<img src=".\Images\UE_ConfigDA_OptionIdToOptionId.png">

<p>This type of <em>Item</em> includes a Dictionary from <strong>Option Ids</strong> to <strong>Option Ids</strong>. The Key of the Dictionary (the <strong>Option Id</strong> to the left) is the one that we're going to configure with this button. The <strong>Option Id</strong> to the right is the one we're gonna reference. This option will always take the current <strong>Material Id</strong> that has been applied to the referenced <strong>Option Id</strong> and use it. When the referenced <strong>Option Id</strong> changes Material, this option will automatically change. If it's the selected option, the Static Meshes tagged with the referencing <strong>Option Id</strong> will be updated as well.</p>

<h5>PDA_ItemOptionIdToSelectionId</h5>

<img src=".\Images\UE_ConfigDA_ItemOptionIdToSelectionId.png">

<p>This type of <em>Item</em> includes a Dictionary from <strong>Option Ids</strong> to <strong>Selection Ids</strong>. When it is selected, it takes all the <strong>Option Ids</strong> and applies the corresponding Selection to them.</p>

<h4>Influences</h4>

<img src=".\Images\UE_ConfigDA_Influence.png">

<p>We saw before that there is a DataAsset called <em>PDA_ActiveInfluences</em>. This DataAsset includes a list of <em>PDA_Influence</em> objects. Each <em>Influence</em> has an <strong>Influencer Tag</strong> and a list of <strong>Influenced Tags</strong>. The way this works is that every time that an <strong>Influenced Tag</strong> has the same Material applied to it as the <strong>Influencer Tag</strong>, if the <strong>Influencer Tag</strong> changes Material the same change is going to be applied to that <strong>Influenced Tag</strong>. This is a way to cascade changes from one <strong>Option Id</strong> to another.</p>

***

<p>Now that you know everything there is to know about Configuration DataAssets, you can either go back to the <a href=".\Documentation.md">Main Menu</a> or read about <a href=".\Exploration">Exploration</a>.</p>

