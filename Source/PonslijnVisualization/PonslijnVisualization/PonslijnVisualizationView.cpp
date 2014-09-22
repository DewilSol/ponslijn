
// PonslijnVisualizationView.cpp : implementation of the CPonslijnVisualizationView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "PonslijnVisualization.h"
#endif

#include "PonslijnVisualizationDoc.h"
#include "PonslijnVisualizationView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CPonslijnVisualizationView

IMPLEMENT_DYNCREATE(CPonslijnVisualizationView, CView)

BEGIN_MESSAGE_MAP(CPonslijnVisualizationView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CPonslijnVisualizationView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CPonslijnVisualizationView construction/destruction

CPonslijnVisualizationView::CPonslijnVisualizationView()
{
	// TODO: add construction code here

}

CPonslijnVisualizationView::~CPonslijnVisualizationView()
{
}

BOOL CPonslijnVisualizationView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CPonslijnVisualizationView drawing

void CPonslijnVisualizationView::OnDraw(CDC* /*pDC*/)
{
	CPonslijnVisualizationDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CPonslijnVisualizationView printing


void CPonslijnVisualizationView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CPonslijnVisualizationView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CPonslijnVisualizationView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CPonslijnVisualizationView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CPonslijnVisualizationView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CPonslijnVisualizationView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CPonslijnVisualizationView diagnostics

#ifdef _DEBUG
void CPonslijnVisualizationView::AssertValid() const
{
	CView::AssertValid();
}

void CPonslijnVisualizationView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPonslijnVisualizationDoc* CPonslijnVisualizationView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPonslijnVisualizationDoc)));
	return (CPonslijnVisualizationDoc*)m_pDocument;
}
#endif //_DEBUG


// CPonslijnVisualizationView message handlers
