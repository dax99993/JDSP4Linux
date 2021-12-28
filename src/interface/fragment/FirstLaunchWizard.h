#ifndef FIRSTLAUNCHWIZARD_H
#define FIRSTLAUNCHWIZARD_H

#include "config/AppConfig.h"
#include <QWidget>

class IAudioService;

namespace Ui
{
	class FirstLaunchWizard;
}

class FirstLaunchWizard :
	public QWidget
{
	Q_OBJECT

public:
    explicit FirstLaunchWizard(IAudioService *audioService,QWidget *parent = nullptr);
	~FirstLaunchWizard();

protected:
    void showEvent(QShowEvent* ev) override;

signals:
	void wizardFinished();

private slots:
    void onSystrayRadioSelected();
    void onSystrayAutostartToggled(bool isChecked);

private:
	Ui::FirstLaunchWizard *ui;
	bool lockslot = false;
    IAudioService* audioService;

};

#endif // FIRSTLAUNCHWIZARD_H
