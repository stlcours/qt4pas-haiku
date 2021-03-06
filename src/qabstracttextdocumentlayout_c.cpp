//******************************************************************************
//  Copyright (c) 2005-2011 by Jan Van hijfte
//
//  See the included file COPYING.TXT for details about the copyright.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
//******************************************************************************


C_EXPORT int QAbstractTextDocumentLayout_hitTest(QAbstractTextDocumentLayoutH handle, const QPointFH point, Qt::HitTestAccuracy accuracy)
{
	return (int) ((QAbstractTextDocumentLayout *)handle)->hitTest(*(const QPointF*)point, accuracy);
}

C_EXPORT void QAbstractTextDocumentLayout_anchorAt(QAbstractTextDocumentLayoutH handle, PWideString retval, const QPointFH pos)
{
	QString t_retval;
	t_retval = ((QAbstractTextDocumentLayout *)handle)->anchorAt(*(const QPointF*)pos);
	copyQStringToPWideString(t_retval, retval);
}

C_EXPORT int QAbstractTextDocumentLayout_pageCount(QAbstractTextDocumentLayoutH handle)
{
	return (int) ((QAbstractTextDocumentLayout *)handle)->pageCount();
}

C_EXPORT void QAbstractTextDocumentLayout_documentSize(QAbstractTextDocumentLayoutH handle, QSizeFH retval)
{
	*(QSizeF *)retval = ((QAbstractTextDocumentLayout *)handle)->documentSize();
}

C_EXPORT void QAbstractTextDocumentLayout_frameBoundingRect(QAbstractTextDocumentLayoutH handle, QRectFH retval, QTextFrameH frame)
{
	*(QRectF *)retval = ((QAbstractTextDocumentLayout *)handle)->frameBoundingRect((QTextFrame*)frame);
}

C_EXPORT void QAbstractTextDocumentLayout_blockBoundingRect(QAbstractTextDocumentLayoutH handle, QRectFH retval, const QTextBlockH block)
{
	*(QRectF *)retval = ((QAbstractTextDocumentLayout *)handle)->blockBoundingRect(*(const QTextBlock*)block);
}

C_EXPORT void QAbstractTextDocumentLayout_setPaintDevice(QAbstractTextDocumentLayoutH handle, QPaintDeviceH device)
{
	((QAbstractTextDocumentLayout *)handle)->setPaintDevice((QPaintDevice*)device);
}

C_EXPORT QPaintDeviceH QAbstractTextDocumentLayout_paintDevice(QAbstractTextDocumentLayoutH handle)
{
	return (QPaintDeviceH) ((QAbstractTextDocumentLayout *)handle)->paintDevice();
}

C_EXPORT QTextDocumentH QAbstractTextDocumentLayout_document(QAbstractTextDocumentLayoutH handle)
{
	return (QTextDocumentH) ((QAbstractTextDocumentLayout *)handle)->document();
}

C_EXPORT void QAbstractTextDocumentLayout_registerHandler(QAbstractTextDocumentLayoutH handle, int objectType, QObjectH component)
{
	((QAbstractTextDocumentLayout *)handle)->registerHandler(objectType, (QObject*)component);
}

C_EXPORT QTextObjectInterfaceH QAbstractTextDocumentLayout_handlerForObject(QAbstractTextDocumentLayoutH handle, int objectType)
{
	return (QTextObjectInterfaceH) ((QAbstractTextDocumentLayout *)handle)->handlerForObject(objectType);
}

C_EXPORT void QTextObjectInterface_intrinsicSize(QTextObjectInterfaceH handle, QSizeFH retval, QTextDocumentH doc, int posInDocument, const QTextFormatH format)
{
	*(QSizeF *)retval = ((QTextObjectInterface *)handle)->intrinsicSize((QTextDocument*)doc, posInDocument, *(const QTextFormat*)format);
}

C_EXPORT void QTextObjectInterface_drawObject(QTextObjectInterfaceH handle, QPainterH painter, const QRectFH rect, QTextDocumentH doc, int posInDocument, const QTextFormatH format)
{
	((QTextObjectInterface *)handle)->drawObject((QPainter*)painter, *(const QRectF*)rect, (QTextDocument*)doc, posInDocument, *(const QTextFormat*)format);
}

