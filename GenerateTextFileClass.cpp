#include "GenerateTextFileClass.h"
#include "TaskListForm.h"
#include "windows.h"
#include "winuser.h"
#include <string>
#include <iostream> 

using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Windows;
using namespace System::Windows::Forms;
using namespace DailyTasks2022;

class TaskListForm;


void save_Click(System::Object^ ClickBox, System::EventArgs^ e)
{
    CheckBox^ activeCheckBox = safe_cast<CheckBox^>(ClickBox);


    if (activeCheckBox->Checked) {
       string message = "Hello, MessageBox!";
       string caption = "Doing my job!";
       MessageBox::Show("Hello, MessageBox!", "Doing my job!", MessageBoxButtons::YesNo,MessageBoxIcon::Question);
    // LPCWSTR message = TEXT("Hello, MessageBox!");
    // LPCWSTR caption = TEXT("Doing my job!");
    // MessageBoxW(NULL, message, caption, MB_OK | MB_ICONEXCLAMATION);
    }

 //  for each( activeCheckbox ){
 //      // The indexChecked variable contains the index of the item.
 //      MessageBox ("Index#: " + indexChecked.ToString() + ", is checked. Checked state is:" +
 //          checkedListBox1.GetItemCheckState(indexChecked).ToString() + ".");
 //  }
  
  // for each (Object item in   )
  // {
         StreamWriter^ TaskWriter = gcnew StreamWriter("c:\\temp\\mytasklist.txt", true, System::Text::Encoding::Default);
         string layer = " \r\n Layer selected is "; // + item.Text();
         string Tasks = "Task item selected is ";  // + activeCheckBox.Name;
        // SW = File.AppendText("");
        // SW.WriteLine(layer, Environment.NewLine);
        // SW.Close;
  //
  //     for each (FlowLayoutPanel fopanel in item.Controls)
  //     {
  //         for each (CheckBox cmb in fopanel.Controls)
  //         {
  //             if (cmb.Checked)
  //             {
  //                 std::string chkname = item.Text + " \r\n Items selected are " + cmb.Text;
  //                 SW = File.AppendText(@"C:\temp\tasklist.txt");
  //                 SW.WriteLine(chkname, Environment.NewLine);
  //                 SW.Close(taskfile);
  //             }
  //         }
  //     }
  // }
}
