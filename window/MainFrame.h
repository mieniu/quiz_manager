#pragma once
#include <wx/wxprec.h>
#ifndef WX_PRECOMP
	#include <wx/wx.h>
#endif

class MainFrame : public wxFrame
{
private:
	wxButton* exitButton = nullptr;
public:
	MainFrame();
	~MainFrame();
};

