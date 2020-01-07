#pragma once
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif
#include "MainFrame.h"

class QuizApp : public wxApp {
private:
	MainFrame* mFrame = nullptr;
protected:

public:
	virtual bool OnInit();
	QuizApp() {};
	~QuizApp() {};
};