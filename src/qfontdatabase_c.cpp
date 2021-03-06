//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT void QFontDatabase_standardSizes(PPtrIntArray retval)
{
	QList<int> t_retval;
	t_retval = QFontDatabase::standardSizes();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT QFontDatabaseH QFontDatabase_create()
{
	return (QFontDatabaseH) new QFontDatabase();
}

C_EXPORT void QFontDatabase_destroy(QFontDatabaseH handle)
{
	delete (QFontDatabase *)handle;
}

C_EXPORT void QFontDatabase_writingSystems(QFontDatabaseH handle, PPtrIntArray retval)
{
	QList<QFontDatabase::WritingSystem> t_retval;
	t_retval = ((QFontDatabase *)handle)->writingSystems();
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QFontDatabase_writingSystems2(QFontDatabaseH handle, PPtrIntArray retval, PWideString family)
{
	QList<QFontDatabase::WritingSystem> t_retval;
	QString t_family;
	copyPWideStringToQString(family, t_family);
	t_retval = ((QFontDatabase *)handle)->writingSystems(t_family);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QFontDatabase_families(QFontDatabaseH handle, QStringListH retval, QFontDatabase::WritingSystem writingSystem)
{
	*(QStringList *)retval = ((QFontDatabase *)handle)->families(writingSystem);
}

C_EXPORT void QFontDatabase_styles(QFontDatabaseH handle, QStringListH retval, PWideString family)
{
	QString t_family;
	copyPWideStringToQString(family, t_family);
	*(QStringList *)retval = ((QFontDatabase *)handle)->styles(t_family);
}

C_EXPORT void QFontDatabase_pointSizes(QFontDatabaseH handle, PPtrIntArray retval, PWideString family, PWideString style)
{
	QList<int> t_retval;
	QString t_family;
	QString t_style;
	copyPWideStringToQString(family, t_family);
	copyPWideStringToQString(style, t_style);
	t_retval = ((QFontDatabase *)handle)->pointSizes(t_family, t_style);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QFontDatabase_smoothSizes(QFontDatabaseH handle, PPtrIntArray retval, PWideString family, PWideString style)
{
	QList<int> t_retval;
	QString t_family;
	QString t_style;
	copyPWideStringToQString(family, t_family);
	copyPWideStringToQString(style, t_style);
	t_retval = ((QFontDatabase *)handle)->smoothSizes(t_family, t_style);
	copyQListTemplateToPtrIntArray(t_retval, retval);
}

C_EXPORT void QFontDatabase_styleString(QFontDatabaseH handle, PWideString retval, const QFontH font)
{
	QString t_retval;
	t_retval = ((QFontDatabase *)handle)->styleString(*(const QFont*)font);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFontDatabase_styleString2(QFontDatabaseH handle, PWideString retval, const QFontInfoH fontInfo)
{
	QString t_retval;
	t_retval = ((QFontDatabase *)handle)->styleString(*(const QFontInfo*)fontInfo);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFontDatabase_font(QFontDatabaseH handle, QFontH retval, PWideString family, PWideString style, int pointSize)
{
	QString t_family;
	QString t_style;
	copyPWideStringToQString(family, t_family);
	copyPWideStringToQString(style, t_style);
	*(QFont *)retval = ((QFontDatabase *)handle)->font(t_family, t_style, pointSize);
}

C_EXPORT bool QFontDatabase_isBitmapScalable(QFontDatabaseH handle, PWideString family, PWideString style)
{
	QString t_family;
	QString t_style;
	copyPWideStringToQString(family, t_family);
	copyPWideStringToQString(style, t_style);
	return (bool) ((QFontDatabase *)handle)->isBitmapScalable(t_family, t_style);
}

C_EXPORT bool QFontDatabase_isSmoothlyScalable(QFontDatabaseH handle, PWideString family, PWideString style)
{
	QString t_family;
	QString t_style;
	copyPWideStringToQString(family, t_family);
	copyPWideStringToQString(style, t_style);
	return (bool) ((QFontDatabase *)handle)->isSmoothlyScalable(t_family, t_style);
}

C_EXPORT bool QFontDatabase_isScalable(QFontDatabaseH handle, PWideString family, PWideString style)
{
	QString t_family;
	QString t_style;
	copyPWideStringToQString(family, t_family);
	copyPWideStringToQString(style, t_style);
	return (bool) ((QFontDatabase *)handle)->isScalable(t_family, t_style);
}

C_EXPORT bool QFontDatabase_isFixedPitch(QFontDatabaseH handle, PWideString family, PWideString style)
{
	QString t_family;
	QString t_style;
	copyPWideStringToQString(family, t_family);
	copyPWideStringToQString(style, t_style);
	return (bool) ((QFontDatabase *)handle)->isFixedPitch(t_family, t_style);
}

C_EXPORT bool QFontDatabase_italic(QFontDatabaseH handle, PWideString family, PWideString style)
{
	QString t_family;
	QString t_style;
	copyPWideStringToQString(family, t_family);
	copyPWideStringToQString(style, t_style);
	return (bool) ((QFontDatabase *)handle)->italic(t_family, t_style);
}

C_EXPORT bool QFontDatabase_bold(QFontDatabaseH handle, PWideString family, PWideString style)
{
	QString t_family;
	QString t_style;
	copyPWideStringToQString(family, t_family);
	copyPWideStringToQString(style, t_style);
	return (bool) ((QFontDatabase *)handle)->bold(t_family, t_style);
}

C_EXPORT int QFontDatabase_weight(QFontDatabaseH handle, PWideString family, PWideString style)
{
	QString t_family;
	QString t_style;
	copyPWideStringToQString(family, t_family);
	copyPWideStringToQString(style, t_style);
	return (int) ((QFontDatabase *)handle)->weight(t_family, t_style);
}

C_EXPORT void QFontDatabase_writingSystemName(PWideString retval, QFontDatabase::WritingSystem writingSystem)
{
	QString t_retval;
	t_retval = QFontDatabase::writingSystemName(writingSystem);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT void QFontDatabase_writingSystemSample(PWideString retval, QFontDatabase::WritingSystem writingSystem)
{
	QString t_retval;
	t_retval = QFontDatabase::writingSystemSample(writingSystem);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QFontDatabase_addApplicationFont(PWideString fileName)
{
	QString t_fileName;
	copyPWideStringToQString(fileName, t_fileName);
	return (int) QFontDatabase::addApplicationFont(t_fileName);
}

C_EXPORT int QFontDatabase_addApplicationFontFromData(const QByteArrayH fontData)
{
	return (int) QFontDatabase::addApplicationFontFromData(*(const QByteArray*)fontData);
}

C_EXPORT void QFontDatabase_applicationFontFamilies(QStringListH retval, int id)
{
	*(QStringList *)retval = QFontDatabase::applicationFontFamilies(id);
}

C_EXPORT bool QFontDatabase_removeApplicationFont(int id)
{
	return (bool) QFontDatabase::removeApplicationFont(id);
}

C_EXPORT bool QFontDatabase_removeAllApplicationFonts()
{
	return (bool) QFontDatabase::removeAllApplicationFonts();
}

C_EXPORT bool QFontDatabase_supportsThreadedFontRendering()
{
	return (bool) QFontDatabase::supportsThreadedFontRendering();
}

