/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef FRONTENDHEAPBASE_HPP
#define FRONTENDHEAPBASE_HPP

#include <common/Meta.hpp>
#include <common/Partition.hpp>
#include <mvp/MVPHeap.hpp>

#include <touchgfx/transitions/NoTransition.hpp>
#include <gui/common/FrontendApplication.hpp>
#include <gui/model/Model.hpp>

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


/**
 * This class provides the memory that shall be used for memory allocations
 * in the frontend. A single instance of the FrontendHeap is allocated once (in heap
 * memory), and all other frontend objects such as views, presenters and data model are
 * allocated within the scope of this FrontendHeap. As such, the RAM usage of the entire
 * user interface is sizeof(FrontendHeap).
 *
 * @note The FrontendHeap reserves memory for the most memory-consuming presenter and
 * view only. The largest of these classes are determined at compile-time using template
 * magic. As such, it is important to add all presenters, views and transitions to the
 * type lists in this class.
 *
 */
class FrontendHeapBase : public touchgfx::MVPHeap
{
public:
    /**
     * A list of all view types. Must end with meta::Nil.
     * @note All view types used in the application MUST be added to this list!
     */
    typedef touchgfx::meta::TypeList< RzutBocznyView,
            touchgfx::meta::TypeList< ParterView,
            touchgfx::meta::TypeList< salonView,
            touchgfx::meta::TypeList< kuchniaView,
            touchgfx::meta::TypeList< kuchenkaView,
            touchgfx::meta::TypeList< ogrodView,
            touchgfx::meta::TypeList< garazView,
            touchgfx::meta::TypeList< lazienkaDolView,
            touchgfx::meta::TypeList< PietroView,
            touchgfx::meta::TypeList< lazienkaGoraView,
            touchgfx::meta::TypeList< pokoj1View,
            touchgfx::meta::TypeList< pokoj2View,
            touchgfx::meta::TypeList< pokoj3View,
            touchgfx::meta::TypeList< sypialniaView,
            touchgfx::meta::Nil > > > > > > > > > > > > >
            > GeneratedViewTypes;

    /**
     * Determine (compile time) the View type of largest size.
     */
    typedef touchgfx::meta::select_type_maxsize< GeneratedViewTypes >::type MaxGeneratedViewType;

    /**
     * A list of all presenter types. Must end with meta::Nil.
     * @note All presenter types used in the application MUST be added to this list!
     */
    typedef touchgfx::meta::TypeList< RzutBocznyPresenter,
            touchgfx::meta::TypeList< ParterPresenter,
            touchgfx::meta::TypeList< salonPresenter,
            touchgfx::meta::TypeList< kuchniaPresenter,
            touchgfx::meta::TypeList< kuchenkaPresenter,
            touchgfx::meta::TypeList< ogrodPresenter,
            touchgfx::meta::TypeList< garazPresenter,
            touchgfx::meta::TypeList< lazienkaDolPresenter,
            touchgfx::meta::TypeList< PietroPresenter,
            touchgfx::meta::TypeList< lazienkaGoraPresenter,
            touchgfx::meta::TypeList< pokoj1Presenter,
            touchgfx::meta::TypeList< pokoj2Presenter,
            touchgfx::meta::TypeList< pokoj3Presenter,
            touchgfx::meta::TypeList< sypialniaPresenter,
            touchgfx::meta::Nil > > > > > > > > > > > > >
            > GeneratedPresenterTypes;

    /**
     * Determine (compile time) the Presenter type of largest size.
     */
    typedef touchgfx::meta::select_type_maxsize< GeneratedPresenterTypes >::type MaxGeneratedPresenterType;

    /**
     * A list of all transition types. Must end with meta::Nil.
     * @note All transition types used in the application MUST be added to this list!
     */
    typedef touchgfx::meta::TypeList< touchgfx::NoTransition,
            touchgfx::meta::Nil
            > GeneratedTransitionTypes;

    /**
     * Determine (compile time) the Transition type of largest size.
     */
    typedef touchgfx::meta::select_type_maxsize< GeneratedTransitionTypes >::type MaxGeneratedTransitionType;

    virtual void gotoStartScreen(FrontendApplication& app)
    {
        app.gotoRzutBocznyScreenNoTransition();
    }
protected:
    FrontendHeapBase(touchgfx::AbstractPartition& presenters, touchgfx::AbstractPartition& views, touchgfx::AbstractPartition& transitions, FrontendApplication& app)
        : MVPHeap(presenters, views, transitions, app)
    {

    }

};

#endif // FRONTENDHEAPBASE_HPP
