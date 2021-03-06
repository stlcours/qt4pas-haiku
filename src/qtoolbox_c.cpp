//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT QToolBoxH QToolBox_create(QWidgetH parent, unsigned int f)
{
	return (QToolBoxH) new QToolBox((QWidget*)parent, (Qt::WindowFlags)f);
}

C_EXPORT void QToolBox_destroy(QToolBoxH handle)
{
	delete (QToolBox *)handle;
}

C_EXPORT int QToolBox_addItem(QToolBoxH handle, QWidgetH widget, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (int) ((QToolBox *)handle)->addItem((QWidget*)widget, t_text);
}

C_EXPORT int QToolBox_addItem2(QToolBoxH handle, QWidgetH widget, const QIconH icon, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (int) ((QToolBox *)handle)->addItem((QWidget*)widget, *(const QIcon*)icon, t_text);
}

C_EXPORT int QToolBox_insertItem(QToolBoxH handle, int index, QWidgetH widget, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (int) ((QToolBox *)handle)->insertItem(index, (QWidget*)widget, t_text);
}

C_EXPORT int QToolBox_insertItem2(QToolBoxH handle, int index, QWidgetH widget, const QIconH icon, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	return (int) ((QToolBox *)handle)->insertItem(index, (QWidget*)widget, *(const QIcon*)icon, t_text);
}

C_EXPORT void QToolBox_removeItem(QToolBoxH handle, int index)
{
	((QToolBox *)handle)->removeItem(index);
}

C_EXPORT void QToolBox_setItemEnabled(QToolBoxH handle, int index, bool enabled)
{
	((QToolBox *)handle)->setItemEnabled(index, enabled);
}

C_EXPORT bool QToolBox_isItemEnabled(QToolBoxH handle, int index)
{
	return (bool) ((QToolBox *)handle)->isItemEnabled(index);
}

C_EXPORT void QToolBox_setItemText(QToolBoxH handle, int index, PWideString text)
{
	QString t_text;
	copyPWideStringToQString(text, t_text);
	((QToolBox *)handle)->setItemText(index, t_text);
}

C_EXPORT void QToolBox_itemText(QToolBoxH handle, PWideString retval, int index)
{
	QString t_retval;
	t_retval = ((QToolBox *)handle)->itemText(index);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QToolBox_setItemIcon(QToolBoxH handle, int index, const QIconH icon)
{
	((QToolBox *)handle)->setItemIcon(index, *(const QIcon*)icon);
}

C_EXPORT void QToolBox_itemIcon(QToolBoxH handle, QIconH retval, int index)
{
	*(QIcon *)retval = ((QToolBox *)handle)->itemIcon(index);
}

C_EXPORT void QToolBox_setItemToolTip(QToolBoxH handle, int index, PWideString toolTip)
{
	QString t_toolTip;
	copyPWideStringToQString(toolTip, t_toolTip);
	((QToolBox *)handle)->setItemToolTip(index, t_toolTip);
}

C_EXPORT void QToolBox_itemToolTip(QToolBoxH handle, PWideString retval, int index)
{
	QString t_retval;
	t_retval = ((QToolBox *)handle)->itemToolTip(index);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QToolBox_currentIndex(QToolBoxH handle)
{
	return (int) ((QToolBox *)handle)->currentIndex();
}

C_EXPORT QWidgetH QToolBox_currentWidget(QToolBoxH handle)
{
	return (QWidgetH) ((QToolBox *)handle)->currentWidget();
}

C_EXPORT QWidgetH QToolBox_widget(QToolBoxH handle, int index)
{
	return (QWidgetH) ((QToolBox *)handle)->widget(index);
}

C_EXPORT int QToolBox_indexOf(QToolBoxH handle, QWidgetH widget)
{
	return (int) ((QToolBox *)handle)->indexOf((QWidget*)widget);
}

C_EXPORT int QToolBox_count(QToolBoxH handle)
{
	return (int) ((QToolBox *)handle)->count();
}

C_EXPORT void QToolBox_setCurrentIndex(QToolBoxH handle, int index)
{
	((QToolBox *)handle)->setCurrentIndex(index);
}

C_EXPORT void QToolBox_setCurrentWidget(QToolBoxH handle, QWidgetH widget)
{
	((QToolBox *)handle)->setCurrentWidget((QWidget*)widget);
}

