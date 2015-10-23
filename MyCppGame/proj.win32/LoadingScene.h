//
//  LoadingScene.h
//  pkDemon
//
//  Created by DL on 15-10-23.
//
//

#ifndef __PK__LOADINGSCENE__H
#define __PK__LOADINGSCENE__H

#include <cocos2d.h>

class LoadingScene : cocos2d::Scene
{
public:
	LoadingScene();
	~LoadingScene();
	CREATE_FUNC(LoadingScene);

	virtual bool init();


private:
	cocos2d::ProgressTimer* _progressBar;
	int countOfLoadedRes;
	int countOfTotalRes;

	void PrepareProgressBar();
	void LoadRes();
	void UpdateProgressBar();
	void CompleteLoadRes();

};

#endif