#include "MainFrame.h"

MainFrame::MainFrame() : wxFrame(nullptr, wxID_ANY, "Quiz Manager", wxPoint(30,30), wxSize(800,640))
{
	exitButton = new wxButton(this, wxID_ANY, "Wyjœcie z programu", wxPoint(30,40), wxSize(50,50));
}

MainFrame::~MainFrame()
{
	delete exitButton;
}