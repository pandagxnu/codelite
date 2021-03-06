//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
//
// copyright            : (C) 2013 by Eran Ifrah
// file name            : openresourcedialogbase.h
//
// -------------------------------------------------------------------------
// A
//              _____           _      _     _ _
//             /  __ \         | |    | |   (_) |
//             | /  \/ ___   __| | ___| |    _| |_ ___
//             | |    / _ \ / _  |/ _ \ |   | | __/ _ )
//             | \__/\ (_) | (_| |  __/ |___| | ||  __/
//              \____/\___/ \__,_|\___\_____/_|\__\___|
//
//                                                  F i l e
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef OPENRESOURCEDIALOGBASE_BASE_CLASSES_H
#define OPENRESOURCEDIALOGBASE_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/dialog.h>
#include <wx/sizer.h>
#include <wx/textctrl.h>
#include <wx/listctrl.h>
#include <wx/button.h>

class OpenResourceDialogBase : public wxDialog
{
protected:
    wxTextCtrl* m_textCtrlResourceName;
    wxListView* m_listOptions;
    wxButton* m_buttonOk;
    wxButton* m_buttonCancel;

protected:
    virtual void OnKeyDown(wxKeyEvent& event) { event.Skip(); }
    virtual void OnText(wxCommandEvent& event) { event.Skip(); }
    virtual void OnEnter(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOK(wxCommandEvent& event) { event.Skip(); }
    virtual void OnOKUI(wxUpdateUIEvent& event) { event.Skip(); }

public:
    OpenResourceDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Open Resource"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(600,400), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~OpenResourceDialogBase();
};

#endif
