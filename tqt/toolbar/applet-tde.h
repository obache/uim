/*

 Copyright (c) 2006-2013 uim Project https://github.com/uim/uim

 All rights reserved.

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions
 are met:

 1. Redistributions of source code must retain the above copyright
    notice, this list of conditions and the following disclaimer.
 2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditions and the following disclaimer in the
    documentation and/or other materials provided with the distribution.
 3. Neither the name of authors nor the names of its contributors
    may be used to endorse or promote products derived from this software
    without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS ``AS IS'' AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT HOLDERS OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 SUCH DAMAGE.

*/

#ifndef UIM_TQT_TOOLBAR_APPLET_TDE_H
#define UIM_TQT_TOOLBAR_APPLET_TDE_H

#include <kpanelapplet.h>

#include "common-quimhelpertoolbar.h"

class UimToolbar : public QUimHelperToolbar
{
    TQ_OBJECT

public:
    UimToolbar(TQWidget *parent = 0, const char *name = 0, WFlags f = 0);
    ~UimToolbar();

    int preferedWidthForHeight();
    void mousePressEvent(TQMouseEvent *);
};

class UimApplet : public KPanelApplet
{
    TQ_OBJECT

public:
    UimApplet(const TQString& configFile, Type t = Normal, int actions = 0,
	      TQWidget *parent = 0, const char *name = 0);
    ~UimApplet();

    int widthForHeight(int h) const;
    int heightForWidth(int w) const;
    void preferences();
    void resizeEvent(TQResizeEvent *ev);

protected slots:
    void slotToolbarResized();

protected:
    UimToolbar *toolbar;
};

#endif
