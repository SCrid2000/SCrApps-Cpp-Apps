

#include "IwNUI.h"
#include "IwUtil.h"
#include "IwNUIImage.h"

using namespace IwNUI;

const CColour COLOUR_BLACK      (0xffECECEC);


CAppPtr app;
CWindowPtr window;
CWindowPtr window1;
CWindowPtr window2;
CWindowPtr window3;
CWindowPtr window4;
CWindowPtr window5;
CWindowPtr window6;
CWindowPtr window7;
	

bool OnDisasterClick(void* data, CButton* button)
{
	app->ShowWindow(window1);
    return true;
}

bool OnsuppliesClick(void* data, CButton* button)
{
	app->ShowWindow(window2);
    return true;
}

bool OnFoodWaterClick(void* data, CButton* button)
{
	app->ShowWindow(window3);
    return true;
}

bool OnShelterClick(void* data, CButton* button)
{
	app->ShowWindow(window4);
    return true;
}

bool OnGetSavedClick(void* data, CButton* button)
{
	app->ShowWindow(window5);
    return true;
}


bool OnAfterRescueClick(void* data, CButton* button)
{
	app->ShowWindow(window6);
    return true;
}


bool OnAboutClick(void* data, CButton* button)
{
	app->ShowWindow(window7);
    return true;
}




bool OnBackClick(void* data, CButton* button)
{
	app->ShowWindow(window);
    return true;
}

int main()
{
    app = CreateApp();
    window = CreateWindow();
	window1 = CreateWindow();
	window2 = CreateWindow();
	window3 = CreateWindow();
	window4 = CreateWindow();
	window5 = CreateWindow();
	window6 = CreateWindow();
	window7 = CreateWindow();


    app->AddWindow(window);
	app->AddWindow(window1);
	app->AddWindow(window2);
	app->AddWindow(window3);
	app->AddWindow(window4);
	app->AddWindow(window5);

	CViewPtr view;
	CViewPtr viewDisaster;
	CViewPtr viewsupplies;
	CViewPtr viewFoodWater;
	CViewPtr viewShelter;
	CViewPtr viewGetSaved;
	CViewPtr viewAfterRescue;
	CViewPtr viewAbout;

    view = CreateView("canvas");
	viewDisaster = CreateView("canvas");
	viewsupplies = CreateView("canvas");
	viewFoodWater = CreateView("canvas");
	viewShelter = CreateView("canvas");
	viewGetSaved = CreateView("canvas");
	viewAfterRescue = CreateView("canvas");
	viewAbout = CreateView("canvas");

	
	CLabelPtr titlelabel = CreateLabel(CAttributes()
            .Set("name",    "TitleLabel")
            .Set("caption", "Shipwreck\nSurvival Guide")
            .Set("width", "100%")
            .Set("height", "10%")
			.Set("x1", "0%")
			.Set("y1", "2%")
			.Set("fontStyle",   "bold")
			.Set("fontAlignH", "centre")
			.Set("fontAlignV", "middle")
			.Set("fontSize",    "xx-large")
     );


	CLabelPtr title2label = CreateLabel(CAttributes()
            .Set("name",    "Title2Label")
            .Set("caption", "The essential app for castaways and pirates.")
            .Set("width", "100%")
            .Set("height", "10%")
			.Set("x1", "0")
			.Set("y1", "15%")
			.Set("fontStyle",   "bold")
			.Set("fontAlignH", "centre")
			.Set("fontAlignV", "middle")
			.Set("fontSize",    "x-large")
     );


	CLabelPtr disastertitlelabel = CreateLabel(CAttributes()
            .Set("name",    "DisasterLabel")
            .Set("caption", "When Disaster Strikes")
            .Set("width", "100%")
            .Set("height", "15%")
			.Set("x1", "0")
			.Set("y1", "0")
			.Set("fontStyle",   "bold")
			.Set("fontAlignH", "centre")
			.Set("fontAlignV", "middle")
			.Set("fontSize",    "xx-large")
     );

	CLabelPtr Disaster2 = CreateLabel(CAttributes()
            .Set("name",    "Disaster2")
            .Set("caption", "So here you are, minding your own business, traveling across the ocean in a pirate ship, or a plane, or your own personal spaceship, and the worst has happened: you're going to crash into the ocean. \n(Well, it COULD be worse; at least you're not being eaten by zombies or courted by a sparkling vampire). \n\nAt first, you're paralyzed with fear; your feet feel like they're made of lead, and the room seems like it's spinning. \n\nDon't panic, you're ready for this! You have this Shipwreck Survival Guide! \n\nNow, the first thing you need to do is calm down. Take a few deep breaths, have a sip of wine, take your dog for a walk. If you don't have time for any of that, you'll have to figure something else out. Once you're a bit calmer, you need to get out of whatever vehicle you're in. \n\nDifferent vehicles will have different methods of escape: a boat should have a life boat, a plane should have a parachute, and a spaceship should have a Himmelsturmer. Make sure you have this guide in some sort of waterproof container (this is a vital step). Also grab whatever other useful supplies you have time to grab (check the Supplies section for a few examples), and prepare for escape. \n\nOnce you're off your wrecked vehicle, scan the horizon for a deserted desert island. If you don't find land quickly, you're pretty much screwed.")
            .Set("width", "96%")
            .Set("height", "80%")
			.Set("x1", "2%")
			.Set("y1", "15%")
			.Set("fontAlignV", "top")
			.Set("fontSize",    "medium")
     );


	CLabelPtr suppliestitlelabel = CreateLabel(CAttributes()
            .Set("name",    "Supplies")
            .Set("caption", "Gathering Supplies")
            .Set("width", "100%")
            .Set("height", "15%")
			.Set("x1", "0")
			.Set("y1", "0")
			.Set("fontStyle",   "bold")
			.Set("fontAlignH", "centre")
			.Set("fontAlignV", "middle")
			.Set("fontSize",    "x-large")
     );


	CLabelPtr Supplies = CreateLabel(CAttributes()
            .Set("name",    "Supplies")
            .Set("caption", "Once you've managed to reach land, the first thing you should do is begin gathering supplies. You might be tempted to begin by creating a signal fire, or express your feelings to that hot blonde from cabin 247, but there will be time for that later. \n\nIf the ship or plane you were on washed up on the island, that should be the first place you look for supplies. If it didn't, search the beach and other surrounding areas. Just don't get lost (as if you weren't lost already). \n\nThe first and most important supply to gather is, of course, this survival guide; its worth it's weight in gold (which admittedly might be worthless on a desert island). \nThe next most important things are food and water (there's even a section for that). \n\nWhile searching for food and water, keep an eye out for shelter and other useful supplies, such as:\n - Books (it gets boring on an island), especially travel books or maps; \n - Knives, guns, grenades, laser guns, and other potential weapons; \n - Rope, string, etc;\n - Can Openers, pots and pans, and other kitchen supplies;\n - Shelter and/or Building supplies; \n\nThis is not an exclusive list; if you see any other potentially useful supplies, grab them before someone else does.")
            .Set("width", "96%")
            .Set("height", "80%")
			.Set("x1", "2%")
			.Set("y1", "15%")
			.Set("fontAlignV", "top")
			.Set("fontSize",    "medium")
     );


	CLabelPtr foodwatertitlelabel = CreateLabel(CAttributes()
            .Set("name",    "FoodWater")
            .Set("caption", "Gathering Food and Water")
            .Set("width", "100%")
            .Set("height", "15%")
			.Set("x1", "0")
			.Set("y1", "0")
			.Set("fontStyle",   "bold")
			.Set("fontAlignH", "centre")
			.Set("fontAlignV", "middle")
			.Set("fontSize",    "x-large")
     );

	CLabelPtr FoodWater = CreateLabel(CAttributes()
            .Set("name",    "FoodWater")
            .Set("caption", "The absolute most important thing for you to find is water, closely followed by food. Assuming you lost your atmospheric water generator and food replicator, you'll need to search for food and water. \nYou won't survive more than a few days without water, so start looking for that first. You can survive a few weeks without food if you have to. \n\nMake sure the water you find is fresh, and isn't salt water like the ocean. Studies have found over and over again that too much salt is bad for you. Your health is important, and you don't want to die from heart disease within a few years. You should boil your water to get rid of any bug eggs, disease, or other nasty stuff that might be in it. \n\nWater is fairly straightforward; once you've found it, you've found it. Food can be a little more complicated, as there are tons of potentially poisonous foods out in the jungle. Nuts and berries might be readily available; if they are, harvest them. Try to stick to blue/purple berries, as they're most likely to be edible. Red berries are slightly less likely to be edible, and green and yellow berries are most likely to be poisonous. \n\nIf you're fortunate enough to get some meat, you should cook it first. Meat can be cooked in a variety of ways. You can wrap it in wet leaves and put it in the fire, or roast it on a spit over the fire, or boil it in a pot. Make sure you cook your food thoroughly, or it won't taste as good. \n\nIf there are other people shipwrecked with you, assign everyone a different role in meal preperation: after all, cannibalism is always an option and you don't want to end up being the main course.")
            .Set("width", "96%")
            .Set("height", "80%")
			.Set("x1", "2%")
			.Set("y1", "15%")
			.Set("fontAlignV", "top")
			.Set("fontSize",    "medium")
     );


	CLabelPtr sheltertitlelabel = CreateLabel(CAttributes()
            .Set("name",    "Shelter")
            .Set("caption", "Shelter and Fire")
            .Set("width", "100%")
            .Set("height", "15%")
			.Set("x1", "0")
			.Set("y1", "0")
			.Set("fontStyle",   "bold")
			.Set("fontAlignH", "centre")
			.Set("fontAlignV", "middle")
			.Set("fontSize",    "x-large")
     );

		CLabelPtr Shelter = CreateLabel(CAttributes()
            .Set("name",    "Shelter")
            .Set("caption", "Once you've gathered some basic supplies and found water, the next step is to make sure you have shelter. \n\nShelter will protect you from sun damage (skin cancer is a very real risk) during the day and from animals and natives at night. It will protect you from the rain during storms. Shelter is obviously very important. \n\nYou might think you should stay on the beach to increase your chances of being rescued; if you do, you're wrong (more information about being rescued is in the section on being rescued). If possible, find shelter close to your water source. \n\nFire is also nearly essential, for warmth, potential rescue, and especially to cook meat and boil water. Hopefully you have matches or a lighter handy; if you don't, there's other ways to start a fire. No matter what method you use to start a fire, you'll need tinder (small, easy to light stuff), kindling (slightly bigger and longer burning materials like twigs), and fuel (logs and other large material that burns for a long time). Methods for starting a fire include: \n - Friction: the classic 'Rubbing Two Sticks Together' method. This can take along time and might not work at all, but you can try it. \n - Batteries and Steel Wool: just rub a battery (a 9 volt is the best) on the steel wool, making sure both the negative and positive ends touch it. \n - A Lens: you can focus the sun's power and use it to start a fire with glasses, a magnifying glass, or other lens (some people have reported that a balloon full of water will work, but who has a balloon on a desert island?); \n - Flint and Steel: if you can find flint and steel, you can strike the two together to make sparks.")
            .Set("width", "96%")
            .Set("height", "80%")
			.Set("x1", "2%")
			.Set("y1", "15%")
			.Set("fontAlignV", "top")
			.Set("fontSize",    "medium")
     );

	CLabelPtr rescuetitlelabel = CreateLabel(CAttributes()
            .Set("name",    "Rescue")
            .Set("caption", "Getting Rescued")
            .Set("width", "100%")
            .Set("height", "15%")
			.Set("x1", "0")
			.Set("y1", "0")
			.Set("fontStyle",   "bold")
			.Set("fontAlignH", "centre")
			.Set("fontAlignV", "middle")
			.Set("fontSize",    "x-large")
     );

		CLabelPtr Rescue = CreateLabel(CAttributes()
            .Set("name",    "Rescue")
            .Set("caption", "Once you've gotten food, water, sheltor, fire, and supplies, you can turn your attention to being rescued. \nThis is, of course, assuming that you even WANT to be rescued. Think about it, you've got a whole island to yourself, with all the poisonous berries and dangerous animals you could possibly eat. It's certainly better than going back to your cramped, smelly apartment next to your crazy cat-lady neightbor Helga, isn't it? (especially if that hot blonde from cabin 247 is still around).\n\nIf you're convinced you really, truly want to be rescued (in favor of being rescued, the WiFi signal in your cave is pretty awful), there's several things you can do to help increase the chances of that happening: \n 1. Remember that fire you started? Well, take some of it and use it to start a bonfire on the beach. Use green wood so there's lots of smoke, unless you're one of those environmental types who would rather die than burn a tree anyway. Be careful not to set it too close to the treeline; being seen is good, being burnt to a crisp is not so good. \n 2. If you have the time, set several fires. If you can set three fires in a triangle pattern, do it; that's the universal sign for distress, and an airplane might see it. \n 3. If you don't have a fire (you really, really should have one), you can try setting some bright colored objects in a triangle if you're desperate to be doing something. \n 4. Write a message in the sand ('HELP' or 'SOS' is generally better than 'HI' or 'Got Milk?'). \n 5. If you have a flare gun, or a radio, or something like that, use it (duh). \n\nIf you're not rescued in a few days, weeks, months, or even years, well... don't be too surprised. Not to be a downer, but in case you haven't ever seen Gilligan's Island, sometimes people just don't get rescued.")
            .Set("width", "96%")
            .Set("height", "80%")
			.Set("x1", "2%")
			.Set("y1", "15%")
			.Set("fontAlignV", "top")
			.Set("fontSize",    "medium")
     );


	CLabelPtr afterrescuetitlelabel = CreateLabel(CAttributes()
            .Set("name",    "AfterRescue")
            .Set("caption", "After Being Rescued")
            .Set("width", "100%")
            .Set("height", "15%")
			.Set("x1", "0")
			.Set("y1", "0")
			.Set("fontStyle",   "bold")
			.Set("fontAlignH", "centre")
			.Set("fontAlignV", "middle")
			.Set("fontSize",    "x-large")
     );

		CLabelPtr AfterRescue = CreateLabel(CAttributes()
            .Set("name",    "AfterRescue")
            .Set("caption", "In the unlikely event that you actually are not only rescued, but are rescued by someone who isn't going to sell you to some international prostitution ring, congratulations. You defied all odds and expectations, and can now enjoy a few days of immense fame and popularity before everyone forgets about you. \n\nIf you had a family, they probably moved on and relations will be awkward now. Especially with your former spouse, who is probably now married to a sibling, your best friend, or a family pet. \n\nYou probably won't have a job anymore either. You were gone for several weeks after all, and your contract stipulates that you can be fired for missing more than one day without calling in advance. \n\nYou can always try writing your memoirs, and there's the chance that they'll end up selling big (in which case, remember that you wouldn't have survived without this guide and send the author a little something to say 'thanks;' a million or two should suffice). \n\nMost likely though, nothing good will happen as a result of being rescued, in which case you'll probably end up returning to the island and living there happily ever after as a hermit. ")
            .Set("width", "96%")
            .Set("height", "80%")
			.Set("x1", "2%")
			.Set("y1", "15%")
			.Set("fontAlignV", "top")
			.Set("fontSize",    "medium")
     );



	CLabelPtr abouttitlelabel = CreateLabel(CAttributes()
            .Set("name",    "About")
            .Set("caption", "About This App")
            .Set("width", "100%")
            .Set("height", "15%")
			.Set("x1", "0")
			.Set("y1", "0")
			.Set("fontStyle",   "bold")
			.Set("fontAlignH", "centre")
			.Set("fontAlignV", "middle")
			.Set("fontSize",    "x-large")
     );

		CLabelPtr About = CreateLabel(CAttributes()
            .Set("name",    "About")
            .Set("caption", "Do not attempt to create a situation where reliance on this app is necessary. Do not enter into any situation where reliance on the information of this app might be considered. Do not consider following any advice in this app without the supervision of a trained professional. \n\nThis app is created entirely for entertainment purposes. It is not intended to actually help anyone to survive on a desert island, or to survive any kind of unfortunate or fortunate incident of any sort. The information in this app should not only not be considered, but should not even be read. If you have read it, you should promptly forget it.\n\nIf the information is read, remember, or relied upon, the author/developer will not be liable for any negative consequence which almost certainly will result. However, the author/developer will be given 10% of any profits that arise from any reliance on any information in this app. \n\nUse of this app in any way, shape, or form constitutes acceptance of these terms.")
            .Set("width", "96%")
            .Set("height", "80%")
			.Set("x1", "2%")
			.Set("y1", "15%")
			.Set("fontAlignV", "top")
			.Set("fontSize",    "medium")
     );



	CImagePtr leftpic = CreateImage(CAttributes()
        .Set("name",    "leftpic")
		.Set("image",    "images/island.png")
		.Set("x1",      "0")
        .Set("y1",      "0")
        .Set("width",   "25%")
        .Set("height",   "15%")
	);

	CImagePtr rightpic = CreateImage(CAttributes()
        .Set("name",    "rightpic")
		.Set("image",    "images/island2.png")
		.Set("x1",      "75%")
        .Set("y1",      "0")
        .Set("width",   "25%")
        .Set("height",   "15%")
	);


		CButtonPtr disaster = CreateButton(CAttributes()
        .Set("name",    "Disaster")
        .Set("caption", "Disaster Strikes!")
        .Set("x1",      "05%")
        .Set("y1",      "25%")
        .Set("width",   "40%")
        .Set("height",  "10%"));

	CButtonPtr supplies = CreateButton(CAttributes()
        .Set("name",    "supplies")
        .Set("caption", "Gathering Supplies")
        .Set("x1",      "55%")
        .Set("y1",      "25%")
		.Set("width",	"40%")
		.Set("height",	"10%"));

	CButtonPtr foodwater = CreateButton(CAttributes()
        .Set("name",    "FoodWater")
        .Set("caption", "Food and Water")
        .Set("x1",      "05%")
        .Set("y1",      "45%")
		.Set("width",	"40%")
		.Set("height",	"10%"));

	CButtonPtr shelter = CreateButton(CAttributes()
        .Set("name",    "Shelter")
        .Set("caption", "Shelter and Fire")
        .Set("x1",      "55%")
        .Set("y1",      "45%")
		.Set("width",	"40%")
		.Set("height",	"10%"));

	CButtonPtr getsaved = CreateButton(CAttributes()
        .Set("name",    "GetSaved")
        .Set("caption", "Getting Rescued")
        .Set("x1",      "05%")
        .Set("y1",      "65%")
		.Set("width",	"40%")
		.Set("height",	"10%"));
	
	CButtonPtr afterrescue = CreateButton(CAttributes()
        .Set("name",    "AfterRescue")
        .Set("caption", "Aftermath of Rescue")
        .Set("x1",      "55%")
        .Set("y1",      "65%")
		.Set("width",	"40%")
		.Set("height",	"10%"));
	
	CButtonPtr about = CreateButton(CAttributes()
        .Set("name",    "About")
        .Set("caption", "About This App")
        .Set("x1",      "30%")
        .Set("y1",      "85%")
		.Set("width",	"40%")
		.Set("height",	"10%"));

	CButtonPtr backhome = CreateButton(CAttributes()
        .Set("name",    "BackHome")
        .Set("x1",      "1%")
        .Set("y1",      "1%")
        .Set("width",   "80")
        .Set("height",  "80")
		.Set("normal.image","images/back.png")
        .Set("pressed",     CAttributes()
        .Set("image",   "images/back_pushed.png"))
        .Set("disabled",    CAttributes()
        .Set("image",    "images/back.png")));

	CButtonPtr backhome1 = CreateButton(CAttributes()
        .Set("name",    "BackHome")
        .Set("x1",      "1%")
        .Set("y1",      "1%")
        .Set("width",   "80")
        .Set("height",  "80")
		.Set("normal.image","images/back.png")
        .Set("pressed",     CAttributes()
        .Set("image",   "images/back_pushed.png"))
        .Set("disabled",    CAttributes()
        .Set("image",    "images/back.png")));

	CButtonPtr backhome2 = CreateButton(CAttributes()
        .Set("name",    "BackHome")
        .Set("x1",      "1%")
        .Set("y1",      "1%")
        .Set("width",   "80")
        .Set("height",  "80")
		.Set("normal.image","images/back.png")
        .Set("pressed",     CAttributes()
        .Set("image",   "images/back_pushed.png"))
        .Set("disabled",    CAttributes()
        .Set("image",    "images/back.png")));

	CButtonPtr backhome3 = CreateButton(CAttributes()
        .Set("name",    "BackHome")
        .Set("x1",      "1%")
        .Set("y1",      "1%")
        .Set("width",   "80")
        .Set("height",  "80")
		.Set("normal.image","images/back.png")
        .Set("pressed",     CAttributes()
        .Set("image",   "images/back_pushed.png"))
        .Set("disabled",    CAttributes()
        .Set("image",    "images/back.png")));

	CButtonPtr backhome4 = CreateButton(CAttributes()
        .Set("name",    "BackHome")
        .Set("x1",      "1%")
        .Set("y1",      "1%")
        .Set("width",   "80")
        .Set("height",  "80")
		.Set("normal.image","images/back.png")
        .Set("pressed",     CAttributes()
        .Set("image",   "images/back_pushed.png"))
        .Set("disabled",    CAttributes()
        .Set("image",    "images/back.png")));

	CButtonPtr backhome5 = CreateButton(CAttributes()
        .Set("name",    "BackHome")
        .Set("x1",      "1%")
        .Set("y1",      "1%")
        .Set("width",   "80")
        .Set("height",  "80")
		.Set("normal.image","images/back.png")
        .Set("pressed",     CAttributes()
        .Set("image",   "images/back_pushed.png"))
        .Set("disabled",    CAttributes()
        .Set("image",    "images/back.png")));

	CButtonPtr backhome6 = CreateButton(CAttributes()
        .Set("name",    "BackHome")
        .Set("x1",      "1%")
        .Set("y1",      "1%")
        .Set("width",   "80")
        .Set("height",  "80")
		.Set("normal.image","images/back.png")
        .Set("pressed",     CAttributes()
        .Set("image",   "images/back_pushed.png"))
        .Set("disabled",    CAttributes()
        .Set("image",    "images/back.png")));


	CImagePtr backgroundpic = CreateImage(CAttributes()
        .Set("name",    "backgroundpic")
		.Set("image",    "images/wrecked.png")
		.Set("x1",      "0%")
        .Set("y1",      "0%")
        .Set("width",   "100%")
        .Set("height",   "100%")
	);


    disaster->SetEventHandler("click", (void*)NULL, &OnDisasterClick);
	supplies->SetEventHandler("click", (void*)NULL, &OnsuppliesClick);
	foodwater->SetEventHandler("click", (void*)NULL, &OnFoodWaterClick);
	shelter->SetEventHandler("click", (void*)NULL, &OnShelterClick);
	getsaved->SetEventHandler("click", (void*)NULL, &OnGetSavedClick);
	afterrescue->SetEventHandler("click", (void*)NULL, &OnAfterRescueClick);
	about->SetEventHandler("click", (void*)NULL, &OnAboutClick);

    view->AddChild(backgroundpic);
    view->AddChild(disaster);
    view->AddChild(leftpic);
    view->AddChild(rightpic);

	view->AddChild(supplies);
	view->AddChild(foodwater);
	view->AddChild(shelter);
	view->AddChild(getsaved);
	view->AddChild(afterrescue);
	view->AddChild(about);
	view->AddChild(titlelabel);
	view->AddChild(title2label);

	viewDisaster->AddChild(backhome);
	viewDisaster->AddChild(disastertitlelabel);
	viewDisaster->AddChild(Disaster2);

	viewsupplies->AddChild(backhome1);
	viewsupplies->AddChild(suppliestitlelabel);
	viewsupplies->AddChild(Supplies);

	viewFoodWater->AddChild(backhome2);
	viewFoodWater->AddChild(foodwatertitlelabel);
	viewFoodWater->AddChild(FoodWater);


	viewShelter->AddChild(backhome3);
	viewShelter->AddChild(sheltertitlelabel);
	viewShelter->AddChild(Shelter);


	viewGetSaved->AddChild(backhome4);
	viewGetSaved->AddChild(rescuetitlelabel);
	viewGetSaved->AddChild(Rescue);
	
	viewAfterRescue->AddChild(backhome5);
	viewAfterRescue->AddChild(afterrescuetitlelabel);
	viewAfterRescue->AddChild(AfterRescue);
	
	viewAbout->AddChild(backhome6);
	viewAbout->AddChild(abouttitlelabel);
	viewAbout->AddChild(About);

	backhome->SetEventHandler("click", (void*)NULL, &OnBackClick);
	backhome1->SetEventHandler("click", (void*)NULL, &OnBackClick);
	backhome2->SetEventHandler("click", (void*)NULL, &OnBackClick);
	backhome3->SetEventHandler("click", (void*)NULL, &OnBackClick);
	backhome4->SetEventHandler("click", (void*)NULL, &OnBackClick);
	backhome5->SetEventHandler("click", (void*)NULL, &OnBackClick);
	backhome6->SetEventHandler("click", (void*)NULL, &OnBackClick);

    window->SetChild(view);
	window1->SetChild(viewDisaster);
	window2->SetChild(viewsupplies);
	window3->SetChild(viewFoodWater);
	window4->SetChild(viewShelter);
	window5->SetChild(viewGetSaved);
	window6->SetChild(viewAfterRescue);
	window7->SetChild(viewAbout);

    app->ShowWindow(window);

    app->Run();
	app->RemoveWindow(window);
	app->RemoveWindow(window1);
	app->RemoveWindow(window2);
	app->RemoveWindow(window3);
	app->RemoveWindow(window4);
	app->RemoveWindow(window5);
	app->RemoveWindow(window6);
	app->RemoveWindow(window7);
	app->~CApp();

    return 0;
}
