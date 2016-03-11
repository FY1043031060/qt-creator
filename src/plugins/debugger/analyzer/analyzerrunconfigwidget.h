/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Author: Milian Wolff, KDAB (milian.wolff@kdab.com)
** Contact: https://www.qt.io/licensing/
**
** This file is part of Qt Creator.
**
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
****************************************************************************/

#ifndef ANALYZERRUNCONFIGWIDGET_H
#define ANALYZERRUNCONFIGWIDGET_H

#include <debugger/debugger_global.h>

#include <projectexplorer/runconfiguration.h>

QT_BEGIN_NAMESPACE
class QComboBox;
class QPushButton;
QT_END_NAMESPACE

namespace Utils { class DetailsWidget; }

namespace Debugger {

class DEBUGGER_EXPORT AnalyzerRunConfigWidget : public ProjectExplorer::RunConfigWidget
{
    Q_OBJECT

public:
    AnalyzerRunConfigWidget(ProjectExplorer::IRunConfigurationAspect *aspect);

    QString displayName() const;

private slots:
    void chooseSettings(int setting);
    void restoreGlobal();

private:
    QWidget *m_configWidget;
    ProjectExplorer::IRunConfigurationAspect *m_aspect;
    ProjectExplorer::ISettingsAspect *m_config;
    QComboBox *m_settingsCombo;
    QPushButton *m_restoreButton;
    Utils::DetailsWidget *m_details;
};

} // namespace Debugger

#endif // ANALYZERRUNCONFIGWIDGET_H
