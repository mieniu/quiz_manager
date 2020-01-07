#include "QuizApp.h"

wxIMPLEMENT_APP(QuizApp);

bool QuizApp::OnInit() {
	if (!wxApp::OnInit())
		return false;

	mFrame = new MainFrame();
	mFrame->Show(true);

	return true;
}