/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <new>
#include <gui_generated/common/FrontendApplicationBase.hpp>
#include <gui/common/FrontendHeap.hpp>
#include <touchgfx/transitions/NoTransition.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <touchgfx/Texts.hpp>
#include <touchgfx/hal/HAL.hpp>
#include <platform/driver/lcd/LCD16bpp.hpp>
#include <gui/rzutboczny_screen/RzutBocznyView.hpp>
#include <gui/rzutboczny_screen/RzutBocznyPresenter.hpp>
#include <gui/parter_screen/ParterView.hpp>
#include <gui/parter_screen/ParterPresenter.hpp>
#include <gui/salon_screen/salonView.hpp>
#include <gui/salon_screen/salonPresenter.hpp>
#include <gui/kuchnia_screen/kuchniaView.hpp>
#include <gui/kuchnia_screen/kuchniaPresenter.hpp>
#include <gui/kuchenka_screen/kuchenkaView.hpp>
#include <gui/kuchenka_screen/kuchenkaPresenter.hpp>
#include <gui/ogrod_screen/ogrodView.hpp>
#include <gui/ogrod_screen/ogrodPresenter.hpp>
#include <gui/garaz_screen/garazView.hpp>
#include <gui/garaz_screen/garazPresenter.hpp>
#include <gui/lazienkadol_screen/lazienkaDolView.hpp>
#include <gui/lazienkadol_screen/lazienkaDolPresenter.hpp>
#include <gui/pietro_screen/PietroView.hpp>
#include <gui/pietro_screen/PietroPresenter.hpp>
#include <gui/lazienkagora_screen/lazienkaGoraView.hpp>
#include <gui/lazienkagora_screen/lazienkaGoraPresenter.hpp>
#include <gui/pokoj1_screen/pokoj1View.hpp>
#include <gui/pokoj1_screen/pokoj1Presenter.hpp>
#include <gui/pokoj2_screen/pokoj2View.hpp>
#include <gui/pokoj2_screen/pokoj2Presenter.hpp>
#include <gui/pokoj3_screen/pokoj3View.hpp>
#include <gui/pokoj3_screen/pokoj3Presenter.hpp>
#include <gui/sypialnia_screen/sypialniaView.hpp>
#include <gui/sypialnia_screen/sypialniaPresenter.hpp>

using namespace touchgfx;

FrontendApplicationBase::FrontendApplicationBase(Model& m, FrontendHeap& heap)
    : touchgfx::MVPApplication(),
      transitionCallback(),
      frontendHeap(heap),
      model(m)
{
    touchgfx::HAL::getInstance()->setDisplayOrientation(touchgfx::ORIENTATION_LANDSCAPE);
    touchgfx::Texts::setLanguage(GB);
    reinterpret_cast<touchgfx::LCD16bpp&>(touchgfx::HAL::lcd()).enableTextureMapperAll();
}

/*
 * Screen Transition Declarations
 */

// RzutBoczny

void FrontendApplicationBase::gotoRzutBocznyScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoRzutBocznyScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoRzutBocznyScreenNoTransitionImpl()
{
    touchgfx::makeTransition<RzutBocznyView, RzutBocznyPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Parter

void FrontendApplicationBase::gotoParterScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoParterScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoParterScreenNoTransitionImpl()
{
    touchgfx::makeTransition<ParterView, ParterPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// salon

void FrontendApplicationBase::gotosalonScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotosalonScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotosalonScreenNoTransitionImpl()
{
    touchgfx::makeTransition<salonView, salonPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// kuchnia

void FrontendApplicationBase::gotokuchniaScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotokuchniaScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotokuchniaScreenNoTransitionImpl()
{
    touchgfx::makeTransition<kuchniaView, kuchniaPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// kuchenka

void FrontendApplicationBase::gotokuchenkaScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotokuchenkaScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotokuchenkaScreenNoTransitionImpl()
{
    touchgfx::makeTransition<kuchenkaView, kuchenkaPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// ogrod

void FrontendApplicationBase::gotoogrodScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoogrodScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoogrodScreenNoTransitionImpl()
{
    touchgfx::makeTransition<ogrodView, ogrodPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// garaz

void FrontendApplicationBase::gotogarazScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotogarazScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotogarazScreenNoTransitionImpl()
{
    touchgfx::makeTransition<garazView, garazPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// lazienkaDol

void FrontendApplicationBase::gotolazienkaDolScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotolazienkaDolScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotolazienkaDolScreenNoTransitionImpl()
{
    touchgfx::makeTransition<lazienkaDolView, lazienkaDolPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// Pietro

void FrontendApplicationBase::gotoPietroScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotoPietroScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotoPietroScreenNoTransitionImpl()
{
    touchgfx::makeTransition<PietroView, PietroPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// lazienkaGora

void FrontendApplicationBase::gotolazienkaGoraScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotolazienkaGoraScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotolazienkaGoraScreenNoTransitionImpl()
{
    touchgfx::makeTransition<lazienkaGoraView, lazienkaGoraPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// pokoj1

void FrontendApplicationBase::gotopokoj1ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotopokoj1ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotopokoj1ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<pokoj1View, pokoj1Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// pokoj2

void FrontendApplicationBase::gotopokoj2ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotopokoj2ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotopokoj2ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<pokoj2View, pokoj2Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// pokoj3

void FrontendApplicationBase::gotopokoj3ScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotopokoj3ScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotopokoj3ScreenNoTransitionImpl()
{
    touchgfx::makeTransition<pokoj3View, pokoj3Presenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}

// sypialnia

void FrontendApplicationBase::gotosypialniaScreenNoTransition()
{
    transitionCallback = touchgfx::Callback<FrontendApplicationBase>(this, &FrontendApplication::gotosypialniaScreenNoTransitionImpl);
    pendingScreenTransitionCallback = &transitionCallback;
}

void FrontendApplicationBase::gotosypialniaScreenNoTransitionImpl()
{
    touchgfx::makeTransition<sypialniaView, sypialniaPresenter, touchgfx::NoTransition, Model >(&currentScreen, &currentPresenter, frontendHeap, &currentTransition, &model);
}
