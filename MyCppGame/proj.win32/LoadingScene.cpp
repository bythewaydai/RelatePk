//
//  LoadingScene.h
//  pkDemon
//
//  Created by DL on 15-10-23.
//
//

#include "LoadingScene.h"
using namespace cocos2d;

LoadingScene::LoadingScene()
{

}

LoadingScene::~LoadingScene()
{

}

bool LoadingScene::init()
{
	if(cocos2d::Scene::init())
	{
		return false;
	}
	this->PrepareProgressBar();
	this->LoadRes();
	return true;
}

void LoadingScene::PrepareProgressBar()
{
	this->_progressBar=ProgressTimer::create(Sprite::create("loadBar.png"));
	this->_progressBar->setType(ProgressTimerType::BAR);
	this->_progressBar->setMidpoint(Vec2(0,0));
	//this->_progressBar->setBarChangeRate(Vec2(1,));
	/*Size size = Director::getInstance()->getWinSize();
	auto progressBarBg = Sprite::create("load.png");
	progressBarBg->setPosition(Point(size.width / 2,  size.height / 2 ));  
	addChild(progressBarBg);

	progressBar = ProgressTimer::create(Sprite::create("loadBar.png"));
	progressBar->setType(ProgressTimer::Type::BAR);
	progressBar->setMidpoint(Point(0, 0.5f));
	progressBar->setBarChangeRate(Point(1, 0));
	progressBar->setPercentage(0);
	progressBar->setAnchorPoint(Point(0.5f, 0.5f));
    progressBar->setPosition(Point(progressBarBg->getContentSize().width / 2,  progressBarBg->getContentSize().height /6 ));  
	progressBarBg->addChild(progressBar);
    return progressBar;*/




}

void LoadingScene::LoadRes()
{

}

void LoadingScene::UpdateProgressBar()
{

}

void LoadingScene::CompleteLoadRes()
{

}


