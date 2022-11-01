#pragma once

//Include shell32.lib in linker sectoin of project propertis

//#include <windows.h>
//#include <filesystem>
#include <iostream>
//#include <tchar.h>
#include <string.h>
#include <codecvt>
//#include <locale>
//#include <ShellAPI.h>
//#include <shlobj.h>
//#include <shlwapi.h>
#include <objbase.h>
#include <atlstr.h>
#include <atlconv.h>
#include <vcclr.h>
//#include <cpprest/ws_client.h>                  // Rest API Client
//#include <cpprest/http_listener.h>              // Rest API HTTP server
//#include <cpprest/json.h>                       // Rest API JSON library 
#include <boost/type.hpp>
#include <boost/any.hpp>
#include <boost/variant.hpp>
#include <boost/cstdlib.hpp>
#include <boost/foreach.hpp>
#include <boost/tokenizer.hpp>



namespace DailyTasks2022 {

	using namespace System;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Globalization;
	//using namespace utility;                    // Rest API Common utilities like string conversions
	//using namespace web;                        // Rest API Common features like URIs.
	//using namespace web::json;                  // Rest API JSON library
	//using namespace web::http;                  // Rest API Common HTTP functionality
	//using namespace web::http::client;          // Rest API HTTP client features
	//using namespace concurrency::streams;       // Rest API Asynchronous streams
	//using namespace web::websockets::client;    // Rest API 

	//using namespace Thrzn41::Util;
	//using namespace Thrzn41::WebexTeams;
	//using namespace Thrzn41::WebexTeams::Version1;
	//using namespace boost;
	//using namespace boost::anys;

	//void PostToWebex(StreamWriter^ outFile) {
	//	// Load encrypted bot token from storage.
	//	ProtectedString token = LoadEncryptedBotToken();
	//	// Create a TeamsAPIClient instance with retry option.
	//	TeamsAPIClient teams = TeamsAPI.CreateVersion1Client(token, TeamsRetryHandler(4));
	//	// Build markdown.
	//	auto markdown = gcnew MarkdownBuilder();
	//	markdown->Append("Hi, Webex Teams!!"));
	//	// Post a message.
	//	auto message = (await teams.CreateDirectMessageAsync("your_webex_teams_account@example.com", markdown.ToString())).GetData();
	//	outFile->WriteLine("Message was posted: ID = {0}", message.Id);
	//}


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class TaskListForm : public System::Windows::Forms::Form
	{
	public:
		TaskListForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~TaskListForm()
		{
			if (components)
			{
				delete components;
			}
		}
//	private: System::Windows::Forms::CheckBox^ checkBox1;
//	public: System::Windows::Forms::CheckBox^ checkBox2;

	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox5;
	private: System::Windows::Forms::CheckBox^ checkBox6;
	private: System::Windows::Forms::CheckBox^ checkBox7;
	private: System::Windows::Forms::CheckBox^ checkBox8;
	private: System::Windows::Forms::CheckBox^ checkBox9;
	private: System::Windows::Forms::CheckBox^ checkBox10;
	private: System::Windows::Forms::CheckBox^ checkBox11;
	private: System::Windows::Forms::CheckBox^ checkBox12;
	private: System::Windows::Forms::CheckBox^ checkBox13;
	private: System::Windows::Forms::CheckBox^ checkBox14;
	private: System::Windows::Forms::CheckBox^ checkBox15;
	private: System::Windows::Forms::CheckBox^ checkBox16;
	private: System::Windows::Forms::CheckBox^ checkBox17;
	private: System::Windows::Forms::Button^ save;

	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::CheckBox^ checkBox18;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		//void PostToWebex(StreamWriter^);

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TaskListForm::typeid));
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox7 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox8 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox9 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox10 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox11 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox12 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox13 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox14 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox15 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox16 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox17 = (gcnew System::Windows::Forms::CheckBox());
			this->save = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox18 = (gcnew System::Windows::Forms::CheckBox());
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(23, 97);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(60, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Bacon!";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(310, 97);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(232, 17);
			this->checkBox2->TabIndex = 1;
			this->checkBox2->Text = L"Restore full Epic env \?\?\? for integrity check";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(310, 143);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(228, 17);
			this->checkBox3->TabIndex = 2;
			this->checkBox3->Text = L"Backup \?\?\? data to cloud for recovery test";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(310, 166);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(167, 17);
			this->checkBox4->TabIndex = 3;
			this->checkBox4->Text = L"Investigate network issue \?\?\?";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Location = System::Drawing::Point(23, 281);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(188, 17);
			this->checkBox5->TabIndex = 4;
			this->checkBox5->Text = L"Update automation scripts for \?\?\? ";
			this->checkBox5->UseVisualStyleBackColor = true;
			this->checkBox5->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Location = System::Drawing::Point(310, 258);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(220, 17);
			this->checkBox6->TabIndex = 5;
			this->checkBox6->Text = L"Centrify/AD account managment for \?\?\? ";
			this->checkBox6->UseVisualStyleBackColor = true;
			this->checkBox6->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox7
			// 
			this->checkBox7->AutoSize = true;
			this->checkBox7->Location = System::Drawing::Point(310, 189);
			this->checkBox7->Name = L"checkBox7";
			this->checkBox7->Size = System::Drawing::Size(177, 17);
			this->checkBox7->TabIndex = 6;
			this->checkBox7->Text = L"Weekly Epic Technical Meeting";
			this->checkBox7->UseVisualStyleBackColor = true;
			this->checkBox7->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox8
			// 
			this->checkBox8->AutoSize = true;
			this->checkBox8->Location = System::Drawing::Point(23, 258);
			this->checkBox8->Name = L"checkBox8";
			this->checkBox8->Size = System::Drawing::Size(127, 17);
			this->checkBox8->TabIndex = 7;
			this->checkBox8->Text = L"Study session for \?\?\?";
			this->checkBox8->UseVisualStyleBackColor = true;
			this->checkBox8->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox9
			// 
			this->checkBox9->AutoSize = true;
			this->checkBox9->Location = System::Drawing::Point(23, 212);
			this->checkBox9->Name = L"checkBox9";
			this->checkBox9->Size = System::Drawing::Size(143, 17);
			this->checkBox9->TabIndex = 8;
			this->checkBox9->Text = L"Study session for centrify";
			this->checkBox9->UseVisualStyleBackColor = true;
			this->checkBox9->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox10
			// 
			this->checkBox10->AutoSize = true;
			this->checkBox10->Location = System::Drawing::Point(23, 189);
			this->checkBox10->Name = L"checkBox10";
			this->checkBox10->Size = System::Drawing::Size(210, 17);
			this->checkBox10->TabIndex = 9;
			this->checkBox10->Text = L"Qlik/Qualys vuln review & Qlik web report update";
			this->checkBox10->UseVisualStyleBackColor = true;
			this->checkBox10->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox11
			// 
			this->checkBox11->AutoSize = true;
			this->checkBox11->Location = System::Drawing::Point(23, 143);
			this->checkBox11->Name = L"checkBox11";
			this->checkBox11->Size = System::Drawing::Size(150, 17);
			this->checkBox11->TabIndex = 10;
			this->checkBox11->Text = L"Weekly unix team meeting";
			this->checkBox11->UseVisualStyleBackColor = true;
			this->checkBox11->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox12
			// 
			this->checkBox12->AutoSize = true;
			this->checkBox12->Location = System::Drawing::Point(23, 235);
			this->checkBox12->Name = L"checkBox12";
			this->checkBox12->Size = System::Drawing::Size(132, 17);
			this->checkBox12->TabIndex = 11;
			this->checkBox12->Text = L"Monthly folder meeting";
			this->checkBox12->UseVisualStyleBackColor = true;
			this->checkBox12->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox13
			// 
			this->checkBox13->AutoSize = true;
			this->checkBox13->Location = System::Drawing::Point(310, 120);
			this->checkBox13->Name = L"checkBox13";
			this->checkBox13->Size = System::Drawing::Size(198, 17);
			this->checkBox13->TabIndex = 12;
			this->checkBox13->Text = L"Epic daily scheduling/collab meeting";
			this->checkBox13->UseVisualStyleBackColor = true;
			this->checkBox13->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox14
			// 
			this->checkBox14->AutoSize = true;
			this->checkBox14->Location = System::Drawing::Point(23, 120);
			this->checkBox14->Name = L"checkBox14";
			this->checkBox14->Size = System::Drawing::Size(226, 17);
			this->checkBox14->TabIndex = 13;
			this->checkBox14->Text = L"Networker daily jobs/tapes monitoring & admin";
			this->checkBox14->UseVisualStyleBackColor = true;
			this->checkBox14->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox15
			// 
			this->checkBox15->AutoSize = true;
			this->checkBox15->Location = System::Drawing::Point(23, 166);
			this->checkBox15->Name = L"checkBox15";
			this->checkBox15->Size = System::Drawing::Size(240, 17);
			this->checkBox15->TabIndex = 14;
			this->checkBox15->Text = L"Networker Job Failure troubleshooting for \?\?\?";
			this->checkBox15->UseVisualStyleBackColor = true;
			this->checkBox15->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox16
			// 
			this->checkBox16->AutoSize = true;
			this->checkBox16->Location = System::Drawing::Point(310, 212);
			this->checkBox16->Name = L"checkBox16";
			this->checkBox16->Size = System::Drawing::Size(197, 17);
			this->checkBox16->TabIndex = 15;
			this->checkBox16->Text = L"Vuneralbility Patching review for \?\?\?";
			this->checkBox16->UseVisualStyleBackColor = true;
			this->checkBox16->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// checkBox17
			// 
			this->checkBox17->AutoSize = true;
			this->checkBox17->Location = System::Drawing::Point(310, 235);
			this->checkBox17->Name = L"checkBox17";
			this->checkBox17->Size = System::Drawing::Size(77, 17);
			this->checkBox17->TabIndex = 16;
			this->checkBox17->Text = L"PTO dates";
			this->checkBox17->UseVisualStyleBackColor = true;
			this->checkBox17->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// save
			// 
			this->save->AccessibleName = L"save_Click";
			this->save->Location = System::Drawing::Point(23, 345);
			this->save->Name = L"save";
			this->save->Size = System::Drawing::Size(184, 22);
			this->save->TabIndex = 17;
			this->save->Text = L"Generate Text File";
			this->save->UseVisualStyleBackColor = true;
			this->save->Click += gcnew System::EventHandler(this, &TaskListForm::save_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(23, 319);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 18;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::Wheat;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(23, 36);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(246, 25);
			this->textBox1->TabIndex = 19;
			this->textBox1->Text = L"Create Daily Task List";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, & TaskListForm::CheckedChanged);
			// 
			// checkBox18
			// 
			this->checkBox18->AutoSize = true;
			this->checkBox18->Location = System::Drawing::Point(310, 282);
			this->checkBox18->Name = L"checkBox18";
			this->checkBox18->Size = System::Drawing::Size(86, 17);
			this->checkBox18->TabIndex = 20;
			this->checkBox18->Text = L"Epic RA ??? install - review for env ???";
			this->checkBox18->UseVisualStyleBackColor = true;
			this->checkBox18->CheckedChanged += gcnew System::EventHandler(this, &TaskListForm::CheckedChanged);
			// 
			// TaskListForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(683, 424);
			this->Controls->Add(this->checkBox18);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->save);
			this->Controls->Add(this->checkBox17);
			this->Controls->Add(this->checkBox16);
			this->Controls->Add(this->checkBox15);
			this->Controls->Add(this->checkBox14);
			this->Controls->Add(this->checkBox13);
			this->Controls->Add(this->checkBox12);
			this->Controls->Add(this->checkBox11);
			this->Controls->Add(this->checkBox10);
			this->Controls->Add(this->checkBox9);
			this->Controls->Add(this->checkBox8);
			this->Controls->Add(this->checkBox7);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"TaskListForm";
			this->Text = L"Task List Generator";
			this->TransparencyKey = System::Drawing::Color::Teal;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
//	MessageBox::Show("You clicked a checkbox!", "I like checkboxes!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
}

private: System::Void save_Click(System::Object^ sender, System::EventArgs^ e) {

	auto myDate = "c:\\Users\\106581\\Documents\\dailytasklist_" + this->dateTimePicker1->Value.ToShortDateString()->Replace("/", "-") + ".txt";

	pin_ptr<const wchar_t> W_myFile = PtrToStringChars(myDate);
	size_t convertedChars = 0;
	size_t  sizeInBytes = ((myDate->Length + 1) * 2);
	errno_t err = 0;
	char* P_myFile = (char*)malloc(sizeInBytes);

	err = wcstombs_s(&convertedChars, P_myFile, sizeInBytes, W_myFile, sizeInBytes);
	if (err != 0)
		printf_s("wcstombs_s string conversion failed!\n");


	//void MarshalString(String ^ s, string & os) {
	using namespace Runtime::InteropServices;
	const char* Open_myDate = (const char*)(Marshal::StringToHGlobalUni(myDate)).ToPointer();
	std::string const SSTRING_myDate = Open_myDate;
	LPCSTR W_myDate = Open_myDate;
	Marshal::FreeHGlobal(IntPtr((void*)Open_myDate));
	//}

	LPCSTR W_GetmyFile = P_myFile;

	// Convert System::String^ to LPCSTR

	//WIN32_FIND_DATA Temp_myDate{};
	//IntPtr ptr = System::Runtime::InteropServices::Marshal::StringToHGlobalUni(myDate);
	//HANDLE hFind = FindFirstFile((LPCSTR)ptr.ToPointer(), &Temp_myDate);
	//System::Runtime::InteropServices::Marshal::FreeHGlobal(ptr);

	
	if (PathFileExistsA(W_GetmyFile)) {
		bool bob;
		System::String^ msg = "Clicking YES will replace the existing file...\r\n";
		if ((bob =(bool)(MessageBox::Show(msg + myDate +"\r\nNO will open the existing file.", "Tasklist for today's date already exist.", MessageBoxButtons::YesNo)))) {
			//CloseHandle(hFind);
			bool result = DeleteFileA(W_GetmyFile);
			//bool result = remove(W_myDate);
			GetLastError();
			if (!result) {
				MessageBox::Show("Error: Could not delete the file.\r\nTry deleting it manually, then restart this program.", "", MessageBoxButtons::OK);
				exit(37);
			}
			//else {
			//	MessageBox::Show("Existing file deleted. Continuing with new file.", "", MessageBoxButtons::OK);
			//}
			
		}
	}


	StreamWriter^ outFile = gcnew StreamWriter(myDate, true);

	outFile->WriteLine("Date:" + this->dateTimePicker1->Value.ToShortDateString());
	outFile->WriteLine("Location:" + "Data Center");
	outFile->WriteLine("Meetings -");
	outFile->WriteLine("Unix Daily Huddle");
	outFile->WriteLine("IS&T Daily Huddle");
	outFile->WriteLine("\nToday's Work:");


	for each (Control ^ c in this->Controls) {
		// The indexChecked variable contains the index of the item.
		//MessageBox::Show(bob, "A new visitor Object!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

		if (c->GetType()->ToString() == "System.Windows.Forms.CheckBox") {
			//System::String ^choice = c->Text;
			CheckBox^ activeCheckBox = safe_cast<CheckBox^>(c);
			if ( activeCheckBox->Checked ) {
				outFile->WriteLine(c->Text);
				outFile->NewLine;
			}
			//MessageBox::Show(c->Text, "Welcome file Mr. Text!", MessageBoxButtons::OK);
		}


		//MessageBox::Show(bob, "Welcome Bob the checkbox!", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		//MessageBox::Show("Index#: " + indexChecked.ToString() + ", is checked. Checked state is:" + checkedListBox1.GetItemCheckState(indexChecked).ToString() + ".");
	}

	outFile->WriteLine("\nAdhoc:");
	outFile->WriteLine("Blockers:none");

	//PostToWebex(outFile);

	// MessageBox::Show("Tasks Complete", "Welcome Bob the checkbox!", MessageBoxButtons::OK);
	outFile->Close();

	//MessageBox::Show(myDate, "Task Complete. File Name", MessageBoxButtons::OK);
	LPCSTR OpenW_myDate = (LPCSTR)W_myDate;
	LPCWSTR WW_GetmyFile = CA2W(W_GetmyFile);

	//ShellExecuteW(NULL, L"open", WW_GetmyFile, NULL, NULL, SW_SHOWNORMAL);
	ShellExecute(NULL, "Open", W_GetmyFile, NULL, NULL, SW_SHOWNORMAL);
	//ShellExecute(NULL, "Open",  "c:\\Users\\106581\\Documents\\dailytasklist_9-9-2022.txt", NULL, NULL, SW_SHOWNORMAL);

	



	exit(0);

}


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {}

};

}

