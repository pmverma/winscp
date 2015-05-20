// CodeGear C++Builder
// Copyright (c) 1995, 2014 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'TBXExtItems.pas' rev: 27.00 (Windows)

#ifndef TbxextitemsHPP
#define TbxextitemsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <Winapi.Windows.hpp>	// Pascal unit
#include <Winapi.Messages.hpp>	// Pascal unit
#include <System.Classes.hpp>	// Pascal unit
#include <System.SysUtils.hpp>	// Pascal unit
#include <Vcl.Graphics.hpp>	// Pascal unit
#include <Vcl.Controls.hpp>	// Pascal unit
#include <Vcl.StdCtrls.hpp>	// Pascal unit
#include <Vcl.ExtCtrls.hpp>	// Pascal unit
#include <TBX.hpp>	// Pascal unit
#include <TBXThemes.hpp>	// Pascal unit
#include <TB2Item.hpp>	// Pascal unit
#include <TB2Toolbar.hpp>	// Pascal unit
#include <TB2ExtItems.hpp>	// Pascal unit
#include <TBXLists.hpp>	// Pascal unit
#include <System.UITypes.hpp>	// Pascal unit
#include <Vcl.ImgList.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Tbxextitems
{
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TTBXEditChange)(System::TObject* Sender, const System::UnicodeString Text);

class DELPHICLASS TTBXEditItem;
class PASCALIMPLEMENTATION TTBXEditItem : public Tb2extitems::TTBEditItem
{
	typedef Tb2extitems::TTBEditItem inherited;
	
private:
	System::Classes::TAlignment FAlignment;
	int FAutoCompleteCounter;
	Tbx::TFontSettings* FEditorFontSettings;
	Tbx::TFontSettings* FFontSettings;
	bool FIsChanging;
	System::UnicodeString FLastEditChange;
	System::WideChar FPasswordChar;
	bool FReadOnly;
	bool FShowImage;
	TTBXEditChange FOnChange;
	void __fastcall FontSettingsChanged(System::TObject* Sender);
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetPasswordChar(System::WideChar Value);
	void __fastcall SetShowImage(const bool Value);
	void __fastcall SetFontSettings(Tbx::TFontSettings* Value);
	
protected:
	virtual bool __fastcall DoAcceptText(System::UnicodeString &NewText);
	virtual bool __fastcall DoAutoComplete(System::UnicodeString &AText);
	virtual void __fastcall DoBeginEdit(Tb2extitems::TTBEditItemViewer* Viewer);
	virtual void __fastcall DoChange(const System::UnicodeString AText);
	virtual void __fastcall DoTextChanged(int Reason);
	virtual int __fastcall GetImageIndex(void);
	virtual Tb2item::TTBItemViewerClass __fastcall GetItemViewerClass(Tb2item::TTBView* AView);
	virtual void __fastcall GetPopupPosition(Tb2item::TTBView* ParentView, Tb2item::TTBPopupWindow* PopupWindow, Tb2item::TTBPopupPositionRec &PopupPositionRec);
	virtual Tb2item::TTBPopupWindowClass __fastcall GetPopupWindowClass(void);
	virtual void __fastcall HandleEditChange(Vcl::Stdctrls::TEdit* Edit);
	
public:
	bool __fastcall StartEditing(Tb2item::TTBView* AView);
	__fastcall virtual TTBXEditItem(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTBXEditItem(void);
	
__published:
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property Tbx::TFontSettings* EditorFontSettings = {read=FEditorFontSettings, write=FEditorFontSettings};
	__property ExtendedAccept = {default=0};
	__property Tbx::TFontSettings* FontSettings = {read=FFontSettings, write=SetFontSettings};
	__property ImageIndex = {default=-1};
	__property Images;
	__property System::WideChar PasswordChar = {read=FPasswordChar, write=SetPasswordChar, default=0};
	__property bool ReadOnly = {read=FReadOnly, write=FReadOnly, default=0};
	__property bool ShowImage = {read=FShowImage, write=SetShowImage, default=0};
	__property TTBXEditChange OnChange = {read=FOnChange, write=FOnChange};
	__property OnSelect;
};


class DELPHICLASS TTBXEditItemViewer;
class PASCALIMPLEMENTATION TTBXEditItemViewer : public Tb2extitems::TTBEditItemViewer
{
	typedef Tb2extitems::TTBEditItemViewer inherited;
	
private:
	void __fastcall EditChangeHandler(System::TObject* Sender);
	System::Types::TSize __fastcall MeasureEditCaption(void);
	int __fastcall MeasureTextHeight(void);
	void __fastcall HandleEditChange(Vcl::Stdctrls::TEdit* Edit);
	
protected:
	System::Classes::TWndMethod OldWndProc;
	virtual void __fastcall CalcSize(Vcl::Graphics::TCanvas* const Canvas, int &AWidth, int &AHeight);
	virtual bool __fastcall DoExecute(void);
	virtual bool __fastcall HandleEditMessage(Winapi::Messages::TMessage &Message);
	virtual int __fastcall GetAccRole(void);
	virtual void __fastcall GetItemInfo(/* out */ Tbxthemes::TTBXItemInfo &ItemInfo, bool IsHoverItem, bool IsPushed, bool UseMenuColor);
	virtual Tb2extitems::TEditClass __fastcall GetEditControlClass(void);
	virtual void __fastcall GetEditInfo(/* out */ Tbxthemes::TTBXEditInfo &EditInfo, const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual int __fastcall GetIndentBefore(void);
	virtual int __fastcall GetIndentAfter(void);
	virtual void __fastcall GetEditRect(System::Types::TRect &R);
	virtual bool __fastcall IsToolbarSize(void);
	void __fastcall NewEditWndProc(Winapi::Messages::TMessage &Message);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* const Canvas, const System::Types::TRect &ClientAreaRect, bool IsHoverItem, bool IsPushed, bool UseDisabledShadow);
	virtual bool __fastcall ShowImage(void);
	virtual bool __fastcall StripTextHotkey(void);
	
public:
	virtual bool __fastcall IsToolbarStyle(void);
public:
	/* TTBItemViewer.Create */ inline __fastcall virtual TTBXEditItemViewer(Tb2item::TTBView* AView, Tb2item::TTBCustomItem* AItem, int AGroupLevel) : Tb2extitems::TTBEditItemViewer(AView, AItem, AGroupLevel) { }
	/* TTBItemViewer.Destroy */ inline __fastcall virtual ~TTBXEditItemViewer(void) { }
	
};


class DELPHICLASS TTBXCustomDropDownItem;
class PASCALIMPLEMENTATION TTBXCustomDropDownItem : public TTBXEditItem
{
	typedef TTBXEditItem inherited;
	
private:
	bool FAlwaysSelectFirst;
	bool FDropDownList;
	System::Classes::TNotifyEvent FOnCancel;
	
protected:
	virtual Tb2item::TTBPopupWindow* __fastcall CreatePopup(Tb2item::TTBView* const ParentView, Tb2item::TTBItemViewer* const ParentViewer, const bool PositionAsSubmenu, const bool SelectFirstItem, const bool Customizing, const System::Types::TPoint &APopupPoint, const Tb2item::TTBPopupAlignment Alignment);
	virtual Tb2item::TTBItemViewerClass __fastcall GetItemViewerClass(Tb2item::TTBView* AView);
	virtual Tb2item::TTBPopupWindowClass __fastcall GetPopupWindowClass(void);
	void __fastcall DoCancel(void);
	
public:
	__fastcall virtual TTBXCustomDropDownItem(System::Classes::TComponent* AOwner);
	__property bool AlwaysSelectFirst = {read=FAlwaysSelectFirst, write=FAlwaysSelectFirst, default=1};
	__property bool DropDownList = {read=FDropDownList, write=FDropDownList, default=0};
	__property System::Classes::TNotifyEvent OnCancel = {read=FOnCancel, write=FOnCancel};
public:
	/* TTBXEditItem.Destroy */ inline __fastcall virtual ~TTBXCustomDropDownItem(void) { }
	
};


class DELPHICLASS TTBXDropDownItem;
class PASCALIMPLEMENTATION TTBXDropDownItem : public TTBXCustomDropDownItem
{
	typedef TTBXCustomDropDownItem inherited;
	
__published:
	__property AlwaysSelectFirst = {default=1};
	__property DropDownList = {default=0};
	__property LinkSubitems;
	__property SubMenuImages;
public:
	/* TTBXCustomDropDownItem.Create */ inline __fastcall virtual TTBXDropDownItem(System::Classes::TComponent* AOwner) : TTBXCustomDropDownItem(AOwner) { }
	
public:
	/* TTBXEditItem.Destroy */ inline __fastcall virtual ~TTBXDropDownItem(void) { }
	
};


class DELPHICLASS TTBXDropDownItemViewer;
class PASCALIMPLEMENTATION TTBXDropDownItemViewer : public TTBXEditItemViewer
{
	typedef TTBXEditItemViewer inherited;
	
protected:
	virtual void __fastcall GetCursor(const System::Types::TPoint &Pt, HICON &ACursor);
	virtual void __fastcall GetEditInfo(/* out */ Tbxthemes::TTBXEditInfo &EditInfo, const Tbxthemes::TTBXItemInfo &ItemInfo);
	virtual int __fastcall GetIndentAfter(void);
	virtual bool __fastcall HandleEditMessage(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall IsPtInButtonPart(int X, int Y);
	virtual void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
public:
	/* TTBItemViewer.Create */ inline __fastcall virtual TTBXDropDownItemViewer(Tb2item::TTBView* AView, Tb2item::TTBCustomItem* AItem, int AGroupLevel) : TTBXEditItemViewer(AView, AItem, AGroupLevel) { }
	/* TTBItemViewer.Destroy */ inline __fastcall virtual ~TTBXDropDownItemViewer(void) { }
	
};


class DELPHICLASS TTBXComboBoxItem;
typedef void __fastcall (__closure *TTBXCAdjustImageIndex)(TTBXComboBoxItem* Sender, const System::UnicodeString AText, int AIndex, int &ImageIndex);

class PASCALIMPLEMENTATION TTBXComboBoxItem : public TTBXCustomDropDownItem
{
	typedef TTBXCustomDropDownItem inherited;
	
private:
	bool FAutoComplete;
	Tbxlists::TTBXStringList* FList;
	System::Classes::TNotifyEvent FOnItemClick;
	TTBXCAdjustImageIndex FOnAdjustImageIndex;
	void __fastcall AdjustImageIndexHandler(Tbxlists::TTBXCustomList* Sender, int AItemIndex, int &ImageIndex);
	int __fastcall GetItemIndex(void);
	int __fastcall GetMaxVisibleItems(void);
	int __fastcall GetMaxWidth(void);
	int __fastcall GetMinWidth(void);
	System::Classes::TStrings* __fastcall GetStrings(void);
	bool __fastcall GetShowListImages(void);
	Tbxlists::TTBXLPaintEvent __fastcall GetOnClearItem(void);
	Tbxlists::TTBXLPaintEvent __fastcall GetOnDrawItem(void);
	Tbxlists::TTBXLMeasureHeight __fastcall GetOnMeasureHeight(void);
	Tbxlists::TTBXLMeasureWidth __fastcall GetOnMeasureWidth(void);
	void __fastcall ListChangeHandler(System::TObject* Sender);
	void __fastcall ListClickHandler(System::TObject* Sender);
	void __fastcall SetItemIndex(int Value);
	void __fastcall SetMaxVisibleItems(int Value);
	void __fastcall SetMaxWidth(int Value);
	void __fastcall SetMinWidth(int Value);
	void __fastcall SetOnClearItem(Tbxlists::TTBXLPaintEvent Value);
	void __fastcall SetOnDrawItem(Tbxlists::TTBXLPaintEvent Value);
	void __fastcall SetOnMeasureHeight(Tbxlists::TTBXLMeasureHeight Value);
	void __fastcall SetOnMeasureWidth(Tbxlists::TTBXLMeasureWidth Value);
	void __fastcall SetStrings(System::Classes::TStrings* Value);
	void __fastcall SetShowListImages(bool Value);
	
protected:
	int CachedImageIndex;
	bool CacheValid;
	bool IsChanging;
	virtual void __fastcall AdjustImageIndex(const System::UnicodeString AText, int AIndex, int &ImageIndex);
	virtual bool __fastcall DoAutoComplete(System::UnicodeString &AText);
	virtual void __fastcall DoListChange(void);
	virtual void __fastcall DoListClick(void);
	virtual void __fastcall DoPopup(Tb2item::TTBCustomItem* Sender, bool FromLink);
	virtual int __fastcall GetImageIndex(void);
	virtual Tb2item::TTBItemViewerClass __fastcall GetItemViewerClass(Tb2item::TTBView* AView);
	virtual Tbxlists::TTBXStringListClass __fastcall GetStringListClass(void);
	virtual void __fastcall HandleEditChange(Vcl::Stdctrls::TEdit* Edit);
	
public:
	__fastcall virtual TTBXComboBoxItem(System::Classes::TComponent* AOwner);
	virtual void __fastcall Loaded(void);
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, default=-1};
	
__published:
	__property bool AutoComplete = {read=FAutoComplete, write=FAutoComplete, default=1};
	__property DropDownList = {default=0};
	__property int MaxListWidth = {read=GetMaxWidth, write=SetMaxWidth, default=0};
	__property int MaxVisibleItems = {read=GetMaxVisibleItems, write=SetMaxVisibleItems, default=8};
	__property int MinListWidth = {read=GetMinWidth, write=SetMinWidth, default=64};
	__property bool ShowListImages = {read=GetShowListImages, write=SetShowListImages, default=0};
	__property System::Classes::TStrings* Strings = {read=GetStrings, write=SetStrings};
	__property SubMenuImages;
	__property OnChange;
	__property TTBXCAdjustImageIndex OnAdjustImageIndex = {read=FOnAdjustImageIndex, write=FOnAdjustImageIndex};
	__property Tbxlists::TTBXLPaintEvent OnClearItem = {read=GetOnClearItem, write=SetOnClearItem};
	__property Tbxlists::TTBXLPaintEvent OnDrawItem = {read=GetOnDrawItem, write=SetOnDrawItem};
	__property System::Classes::TNotifyEvent OnItemClick = {read=FOnItemClick, write=FOnItemClick};
	__property Tbxlists::TTBXLMeasureHeight OnMeasureHeight = {read=GetOnMeasureHeight, write=SetOnMeasureHeight};
	__property Tbxlists::TTBXLMeasureWidth OnMeasureWidth = {read=GetOnMeasureWidth, write=SetOnMeasureWidth};
	__property OnPopup;
	__property OnCancel;
public:
	/* TTBXEditItem.Destroy */ inline __fastcall virtual ~TTBXComboBoxItem(void) { }
	
};


class DELPHICLASS TTBXComboBoxItemViewer;
class PASCALIMPLEMENTATION TTBXComboBoxItemViewer : public TTBXDropDownItemViewer
{
	typedef TTBXDropDownItemViewer inherited;
	
protected:
	virtual bool __fastcall HandleEditMessage(Winapi::Messages::TMessage &Message);
	virtual bool __fastcall StripTextHotkey(void);
public:
	/* TTBItemViewer.Create */ inline __fastcall virtual TTBXComboBoxItemViewer(Tb2item::TTBView* AView, Tb2item::TTBCustomItem* AItem, int AGroupLevel) : TTBXDropDownItemViewer(AView, AItem, AGroupLevel) { }
	/* TTBItemViewer.Destroy */ inline __fastcall virtual ~TTBXComboBoxItemViewer(void) { }
	
};


enum DECLSPEC_DENUM TTBXLabelOrientation : unsigned char { tbxoAuto, tbxoHorizontal, tbxoVertical };

typedef int TNonNegativeInt;

class DELPHICLASS TTBXLabelItem;
class PASCALIMPLEMENTATION TTBXLabelItem : public Tb2item::TTBCustomItem
{
	typedef Tb2item::TTBCustomItem inherited;
	
private:
	Vcl::Controls::TCaption FCaption;
	Tbx::TFontSettings* FFontSettings;
	int FMargin;
	bool FShowAccelChar;
	TTBXLabelOrientation FOrientation;
	int FFixedSize;
	bool FSectionHeader;
	Tbx::TAdjustFontEvent FOnAdjustFont;
	void __fastcall FontSettingsChanged(System::TObject* Sender);
	void __fastcall SetMargin(int Value);
	void __fastcall SetOrientation(TTBXLabelOrientation Value);
	HIDESBASE void __fastcall SetCaption(const Vcl::Controls::TCaption Value);
	void __fastcall SetFontSettings(Tbx::TFontSettings* Value);
	void __fastcall SetShowAccelChar(bool Value);
	void __fastcall SetFixedSize(int Value);
	void __fastcall SetSectionHeader(bool Value);
	
protected:
	virtual Tb2item::TTBItemViewerClass __fastcall GetItemViewerClass(Tb2item::TTBView* AView);
	
public:
	__fastcall virtual TTBXLabelItem(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TTBXLabelItem(void);
	void __fastcall UpdateCaption(const Vcl::Controls::TCaption Value);
	
__published:
	__property Vcl::Controls::TCaption Caption = {read=FCaption, write=SetCaption};
	__property Enabled = {default=1};
	__property Tbx::TFontSettings* FontSettings = {read=FFontSettings, write=SetFontSettings};
	__property int Margin = {read=FMargin, write=SetMargin, default=0};
	__property TTBXLabelOrientation Orientation = {read=FOrientation, write=SetOrientation, default=0};
	__property bool ShowAccelChar = {read=FShowAccelChar, write=SetShowAccelChar, default=1};
	__property int FixedSize = {read=FFixedSize, write=SetFixedSize, default=0};
	__property bool SectionHeader = {read=FSectionHeader, write=SetSectionHeader, default=0};
	__property Visible = {default=1};
	__property Tbx::TAdjustFontEvent OnAdjustFont = {read=FOnAdjustFont, write=FOnAdjustFont};
};


class DELPHICLASS TTBXLabelItemViewer;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTBXLabelItemViewer : public Tb2item::TTBItemViewer
{
	typedef Tb2item::TTBItemViewer inherited;
	
protected:
	virtual System::UnicodeString __fastcall GetCaptionText(void);
	virtual bool __fastcall GetIsHoriz(void);
	virtual void __fastcall DoAdjustFont(Vcl::Graphics::TFont* AFont, int StateFlags);
	virtual void __fastcall CalcSize(Vcl::Graphics::TCanvas* const Canvas, int &AWidth, int &AHeight);
	virtual void __fastcall Paint(Vcl::Graphics::TCanvas* const Canvas, const System::Types::TRect &ClientAreaRect, bool IsHoverItem, bool IsPushed, bool UseDisabledShadow);
	virtual bool __fastcall IsToolbarSize(void);
	
public:
	virtual bool __fastcall IsToolbarStyle(void);
public:
	/* TTBItemViewer.Create */ inline __fastcall virtual TTBXLabelItemViewer(Tb2item::TTBView* AView, Tb2item::TTBCustomItem* AItem, int AGroupLevel) : Tb2item::TTBItemViewer(AView, AItem, AGroupLevel) { }
	/* TTBItemViewer.Destroy */ inline __fastcall virtual ~TTBXLabelItemViewer(void) { }
	
};

#pragma pack(pop)

class DELPHICLASS TTBXColorItem;
class PASCALIMPLEMENTATION TTBXColorItem : public Tbx::TTBXCustomItem
{
	typedef Tbx::TTBXCustomItem inherited;
	
private:
	System::Uitypes::TColor FColor;
	void __fastcall SetColor(System::Uitypes::TColor Value);
	
protected:
	virtual Tb2item::TTBItemViewerClass __fastcall GetItemViewerClass(Tb2item::TTBView* AView);
	
public:
	__fastcall virtual TTBXColorItem(System::Classes::TComponent* AOwner);
	
__published:
	__property Action;
	__property AutoCheck = {default=0};
	__property Caption = {default=0};
	__property Checked = {default=0};
	__property System::Uitypes::TColor Color = {read=FColor, write=SetColor, default=16777215};
	__property DisplayMode = {default=0};
	__property Enabled = {default=1};
	__property FontSettings;
	__property GroupIndex = {default=0};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property Hint = {default=0};
	__property InheritOptions = {default=1};
	__property MaskOptions = {default=0};
	__property MinHeight = {default=0};
	__property MinWidth = {default=0};
	__property Options = {default=0};
	__property RadioItem = {default=0};
	__property ShortCut = {default=0};
	__property Visible = {default=1};
	__property OnAdjustFont;
	__property OnClick;
public:
	/* TTBXCustomItem.Destroy */ inline __fastcall virtual ~TTBXColorItem(void) { }
	
};


class DELPHICLASS TTBXColorItemViewer;
#pragma pack(push,4)
class PASCALIMPLEMENTATION TTBXColorItemViewer : public Tbx::TTBXItemViewer
{
	typedef Tbx::TTBXItemViewer inherited;
	
protected:
	virtual void __fastcall DoPaintCaption(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ClientAreaRect, System::Types::TRect &CaptionRect, bool IsTextRotated, bool &PaintDefault);
	virtual bool __fastcall GetImageShown(void);
	DYNAMIC System::Types::TSize __fastcall GetImageSize(void);
	virtual void __fastcall DrawItemImage(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &ARect, const Tbxthemes::TTBXItemInfo &ItemInfo);
	
public:
	__fastcall virtual TTBXColorItemViewer(Tb2item::TTBView* AView, Tb2item::TTBCustomItem* AItem, int AGroupLevel);
public:
	/* TTBItemViewer.Destroy */ inline __fastcall virtual ~TTBXColorItemViewer(void) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 tcrNumericProperty = System::Int8(0x3);
static const System::Int8 tcrSpinButton = System::Int8(0x4);
static const System::Int8 tcrList = System::Int8(0x5);
}	/* namespace Tbxextitems */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_TBXEXTITEMS)
using namespace Tbxextitems;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// TbxextitemsHPP
