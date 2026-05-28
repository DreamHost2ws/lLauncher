// SPDX-License-Identifier: GPL-3.0-only
/*
 *  Prism Launcher - Minecraft Launcher
 *  Copyright (C) 2024 Tayou <git@tayou.org>
 *  Copyright (C) 2024 TheKodeToad <TheKodeToad@proton.me>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, version 3.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 * This file incorporates work covered by the following copyright and
 * permission notice:
 *
 *      Copyright 2013-2021 MultiMC Contributors
 *
 *      Licensed under the Apache License, Version 2.0 (the "License");
 *      you may not use this file except in compliance with the License.
 *      You may obtain a copy of the License at
 *
 *          http://www.apache.org/licenses/LICENSE-2.0
 *
 *      Unless required by applicable law or agreed to in writing, software
 *      distributed under the License is distributed on an "AS IS" BASIS,
 *      WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *      See the License for the specific language governing permissions and
 *      limitations under the License.
 */
#include "DarkTheme.h"

#include <QObject>

QString DarkTheme::id()
{
    return "dark";
}

QString DarkTheme::name()
{
    return QObject::tr("Dark");
}

QPalette DarkTheme::colorScheme()
{
    QPalette darkPalette;
    darkPalette.setColor(QPalette::Window, QColor(11, 12, 16));
    darkPalette.setColor(QPalette::WindowText, QColor(241, 245, 249));
    darkPalette.setColor(QPalette::Base, QColor(21, 26, 33));
    darkPalette.setColor(QPalette::AlternateBase, QColor(31, 40, 51));
    darkPalette.setColor(QPalette::ToolTipBase, QColor(21, 26, 33));
    darkPalette.setColor(QPalette::ToolTipText, Qt::white);
    darkPalette.setColor(QPalette::Text, QColor(226, 232, 240));
    darkPalette.setColor(QPalette::Button, QColor(31, 40, 51));
    darkPalette.setColor(QPalette::ButtonText, Qt::white);
    darkPalette.setColor(QPalette::BrightText, QColor(255, 92, 0));
    darkPalette.setColor(QPalette::Link, QColor(102, 252, 241));
    darkPalette.setColor(QPalette::Highlight, QColor(0, 114, 255));
    darkPalette.setColor(QPalette::HighlightedText, Qt::white);
    darkPalette.setColor(QPalette::PlaceholderText, QColor(100, 116, 139));
    return fadeInactive(darkPalette, fadeAmount(), fadeColor());
}

double DarkTheme::fadeAmount()
{
    return 0.5;
}

QColor DarkTheme::fadeColor()
{
    return QColor(11, 12, 16);
}

bool DarkTheme::hasStyleSheet()
{
    return true;
}

QString DarkTheme::appStyleSheet()
{
    return QString::fromUtf8(R"(
/* Global Styles for Lighting Launcher */
QWidget {
    color: #e2e8f0;
    font-family: 'Inter', 'Segoe UI', sans-serif;
}

/* Main window and Dialogs */
QDialog, QMainWindow {
    background-color: #0b0c10;
}

/* ToolBar styling for a sleek top panel */
QToolBar {
    background-color: #151a21;
    border-bottom: 1px solid #1f2833;
    spacing: 12px;
    padding: 8px;
}

QToolButton {
    background-color: #1f2833;
    color: #e2e8f0;
    border: 1px solid #2f3b4c;
    border-radius: 8px;
    padding: 6px 12px;
    font-weight: 600;
}

QToolButton:hover {
    background-color: #2a3545;
    border-color: #66fcf1;
    color: #ffffff;
}

QToolButton:pressed {
    background-color: #1f2833;
    border-color: #45f3ff;
}

/* Push Buttons */
QPushButton {
    background-color: #1f2833;
    color: #f1f5f9;
    border: 1px solid #2f3b4c;
    border-radius: 8px;
    padding: 8px 16px;
    font-weight: 600;
}

QPushButton:hover {
    background-color: #2a3545;
    border-color: #66fcf1;
    color: #ffffff;
}

QPushButton:pressed {
    background-color: #151a21;
    border-color: #45f3ff;
}

QPushButton:default {
    border-color: #66fcf1;
    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #1f2833, stop:1 #00f0ff);
}

QPushButton:default:hover {
    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 #2a3545, stop:1 #66fcf1);
}

/* Inputs and text areas */
QLineEdit, QTextEdit, QPlainTextEdit {
    background-color: #151a21;
    color: #f1f5f9;
    border: 1px solid #2f3b4c;
    border-radius: 8px;
    padding: 8px;
}

QLineEdit:focus, QTextEdit:focus, QPlainTextEdit:focus {
    border-color: #66fcf1;
}

/* Item Views (Minecraft instance grids/lists) */
QTreeView, QListView, QTableView {
    background-color: #151a21;
    color: #e2e8f0;
    border: 1px solid #1f2833;
    border-radius: 12px;
    padding: 6px;
}

QTreeView::item, QListView::item {
    border-radius: 8px;
    padding: 8px;
    margin: 2px 0px;
}

QTreeView::item:hover, QListView::item:hover {
    background-color: #1f2833;
    color: #ffffff;
}

QTreeView::item:selected, QListView::item:selected {
    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #0072ff, stop:1 #7000ff);
    color: #ffffff;
    font-weight: bold;
}

/* Menu styling */
QMenuBar {
    background-color: #0b0c10;
    border-bottom: 1px solid #1f2833;
    color: #e2e8f0;
}

QMenuBar::item {
    background: transparent;
    padding: 6px 12px;
}

QMenuBar::item:selected {
    background-color: #1f2833;
    border-radius: 6px;
}

QMenu {
    background-color: #151a21;
    border: 1px solid #2f3b4c;
    border-radius: 8px;
    padding: 6px;
    color: #e2e8f0;
}

QMenu::item {
    padding: 8px 28px 8px 20px;
    border-radius: 6px;
}

QMenu::item:selected {
    background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 #0072ff, stop:1 #7000ff);
    color: #ffffff;
}

/* ScrollBar styling */
QScrollBar:vertical {
    border: none;
    background: #0b0c10;
    width: 10px;
    margin: 0px;
}

QScrollBar::handle:vertical {
    background: #2f3b4c;
    min-height: 24px;
    border-radius: 5px;
}

QScrollBar::handle:vertical:hover {
    background: #66fcf1;
}

QScrollBar::add-line:vertical, QScrollBar::sub-line:vertical {
    border: none;
    background: none;
}

QScrollBar:horizontal {
    border: none;
    background: #0b0c10;
    height: 10px;
    margin: 0px;
}

QScrollBar::handle:horizontal {
    background: #2f3b4c;
    min-width: 24px;
    border-radius: 5px;
}

QScrollBar::handle:horizontal:hover {
    background: #66fcf1;
}

QScrollBar::add-line:horizontal, QScrollBar::sub-line:horizontal {
    border: none;
    background: none;
}

/* Tab widget */
QTabWidget::pane {
    border: 1px solid #1f2833;
    background-color: #151a21;
    border-radius: 12px;
    top: -1px;
}

QTabBar::tab {
    background-color: #1f2833;
    color: #c5a3ff;
    border: 1px solid #1f2833;
    border-bottom: none;
    border-top-left-radius: 8px;
    border-top-right-radius: 8px;
    padding: 8px 16px;
    margin-right: 4px;
}

QTabBar::tab:hover {
    background-color: #2a3545;
    color: #ffffff;
}

QTabBar::tab:selected {
    background-color: #151a21;
    color: #66fcf1;
    border-color: #1f2833;
    border-bottom: 2px solid #66fcf1;
    font-weight: bold;
}

/* Headers */
QHeaderView::section {
    background-color: #1f2833;
    color: #e2e8f0;
    padding: 8px;
    border: none;
    border-bottom: 1px solid #1f2833;
    border-right: 1px solid #1f2833;
}

/* ToolTips */
QToolTip {
    color: #ffffff;
    background-color: #151a21;
    border: 1px solid #66fcf1;
    border-radius: 6px;
    padding: 6px;
}
)");
}

QString DarkTheme::tooltip()
{
    return "";
}
