#include "TaskListForm.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThread]

int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    DailyTasks2022::TaskListForm DailyForm;
    Application::Run(% DailyForm);
}