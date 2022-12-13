#ifndef SYPIALNIAVIEW_HPP
#define SYPIALNIAVIEW_HPP

#include <gui_generated/sypialnia_screen/sypialniaViewBase.hpp>
#include <gui/sypialnia_screen/sypialniaPresenter.hpp>

class sypialniaView : public sypialniaViewBase
{
public:
    sypialniaView();
    virtual ~sypialniaView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
    virtual void tempUp();
    virtual void tempDown();
protected:
    int counter{};
};

#endif // SYPIALNIAVIEW_HPP
