#pragma once
#define _USE_MATH_DEFINES
#define PI                      3.141592654
#include <stdio.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <list>
#include <vector>
#include <map>
#include <stack>
//#include "opencv2\opencv.hpp"



namespace machine_vision_midterm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	using namespace System::Threading::Tasks;
	using namespace System::IO;
	//using namespace cv;
	using namespace std;

	
	/// <summary>
	/// machine_vision_midterm 的摘要
	/// </summary>
	public ref class machine_vision_midterm : public System::Windows::Forms::Form
	{

	public:
		machine_vision_midterm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			//

		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~machine_vision_midterm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	protected:




	protected:

	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
	private: System::ComponentModel::Container^  components;


#pragma region Windows Form Designer generated code
			 /// <summary>
			 /// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
			 /// 這個方法的內容。
			 /// </summary>
			 void InitializeComponent(void)
			 {
				 this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
				 this->button1 = (gcnew System::Windows::Forms::Button());
				 this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->button3 = (gcnew System::Windows::Forms::Button());
				 this->label1 = (gcnew System::Windows::Forms::Label());
				 this->label2 = (gcnew System::Windows::Forms::Label());
				 this->label3 = (gcnew System::Windows::Forms::Label());
				 this->label4 = (gcnew System::Windows::Forms::Label());
				 this->label5 = (gcnew System::Windows::Forms::Label());
				 this->label6 = (gcnew System::Windows::Forms::Label());
				 this->label7 = (gcnew System::Windows::Forms::Label());
				 this->label8 = (gcnew System::Windows::Forms::Label());
				 this->button4 = (gcnew System::Windows::Forms::Button());
				 this->button5 = (gcnew System::Windows::Forms::Button());
				 this->button6 = (gcnew System::Windows::Forms::Button());
				 this->label9 = (gcnew System::Windows::Forms::Label());
				 this->label10 = (gcnew System::Windows::Forms::Label());
				 this->label11 = (gcnew System::Windows::Forms::Label());
				 this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
				 this->SuspendLayout();
				 // 
				 // pictureBox1
				 // 
				 this->pictureBox1->Location = System::Drawing::Point(62, 24);
				 this->pictureBox1->Name = L"pictureBox1";
				 this->pictureBox1->Size = System::Drawing::Size(380, 445);
				 this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				 this->pictureBox1->TabIndex = 0;
				 this->pictureBox1->TabStop = false;
				 // 
				 // button1
				 // 
				 this->button1->Location = System::Drawing::Point(52, 487);
				 this->button1->Name = L"button1";
				 this->button1->Size = System::Drawing::Size(109, 28);
				 this->button1->TabIndex = 1;
				 this->button1->Text = L"open";
				 this->button1->UseVisualStyleBackColor = true;
				 this->button1->Click += gcnew System::EventHandler(this, &machine_vision_midterm::button1_Click);
				 // 
				 // pictureBox2
				 // 
				 this->pictureBox2->Location = System::Drawing::Point(478, 24);
				 this->pictureBox2->Name = L"pictureBox2";
				 this->pictureBox2->Size = System::Drawing::Size(380, 445);
				 this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				 this->pictureBox2->TabIndex = 2;
				 this->pictureBox2->TabStop = false;
				 // 
				 // button2
				 // 
				 this->button2->Location = System::Drawing::Point(177, 488);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(108, 27);
				 this->button2->TabIndex = 3;
				 this->button2->Text = L"binary";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &machine_vision_midterm::button2_Click);
				 // 
				 // button3
				 // 
				 this->button3->Location = System::Drawing::Point(54, 536);
				 this->button3->Name = L"button3";
				 this->button3->Size = System::Drawing::Size(107, 27);
				 this->button3->TabIndex = 4;
				 this->button3->Text = L"hole";
				 this->button3->UseVisualStyleBackColor = true;
				 this->button3->Click += gcnew System::EventHandler(this, &machine_vision_midterm::button3_Click);
				 // 
				 // label1
				 // 
				 this->label1->AutoSize = true;
				 this->label1->Location = System::Drawing::Point(475, 488);
				 this->label1->Name = L"label1";
				 this->label1->Size = System::Drawing::Size(47, 15);
				 this->label1->TabIndex = 5;
				 this->label1->Text = L"# holes";
				 // 
				 // label2
				 // 
				 this->label2->AutoSize = true;
				 this->label2->Location = System::Drawing::Point(528, 488);
				 this->label2->Name = L"label2";
				 this->label2->Size = System::Drawing::Size(14, 15);
				 this->label2->TabIndex = 6;
				 this->label2->Text = L"0";
				 // 
				 // label3
				 // 
				 this->label3->AutoSize = true;
				 this->label3->Location = System::Drawing::Point(657, 487);
				 this->label3->Name = L"label3";
				 this->label3->Size = System::Drawing::Size(56, 15);
				 this->label3->TabIndex = 7;
				 this->label3->Text = L"diameter";
				 // 
				 // label4
				 // 
				 this->label4->AutoSize = true;
				 this->label4->Location = System::Drawing::Point(719, 488);
				 this->label4->Name = L"label4";
				 this->label4->Size = System::Drawing::Size(14, 15);
				 this->label4->TabIndex = 8;
				 this->label4->Text = L"0";
				 // 
				 // label5
				 // 
				 this->label5->AutoSize = true;
				 this->label5->Location = System::Drawing::Point(475, 527);
				 this->label5->Name = L"label5";
				 this->label5->Size = System::Drawing::Size(82, 15);
				 this->label5->TabIndex = 9;
				 this->label5->Text = L"width of lead";
				 // 
				 // label6
				 // 
				 this->label6->AutoSize = true;
				 this->label6->Location = System::Drawing::Point(586, 527);
				 this->label6->Name = L"label6";
				 this->label6->Size = System::Drawing::Size(14, 15);
				 this->label6->TabIndex = 10;
				 this->label6->Text = L"0";
				 // 
				 // label7
				 // 
				 this->label7->AutoSize = true;
				 this->label7->Location = System::Drawing::Point(475, 559);
				 this->label7->Name = L"label7";
				 this->label7->Size = System::Drawing::Size(101, 15);
				 this->label7->TabIndex = 11;
				 this->label7->Text = L"inclination angle";
				 // 
				 // label8
				 // 
				 this->label8->AutoSize = true;
				 this->label8->Location = System::Drawing::Point(582, 559);
				 this->label8->Name = L"label8";
				 this->label8->Size = System::Drawing::Size(14, 15);
				 this->label8->TabIndex = 12;
				 this->label8->Text = L"0";
				 // 
				 // button4
				 // 
				 this->button4->Location = System::Drawing::Point(304, 488);
				 this->button4->Name = L"button4";
				 this->button4->Size = System::Drawing::Size(108, 27);
				 this->button4->TabIndex = 13;
				 this->button4->Text = L"edge detection";
				 this->button4->UseVisualStyleBackColor = true;
				 this->button4->Click += gcnew System::EventHandler(this, &machine_vision_midterm::button4_Click);
				 // 
				 // button5
				 // 
				 this->button5->Location = System::Drawing::Point(178, 537);
				 this->button5->Name = L"button5";
				 this->button5->Size = System::Drawing::Size(107, 26);
				 this->button5->TabIndex = 14;
				 this->button5->Text = L"width";
				 this->button5->UseVisualStyleBackColor = true;
				 this->button5->Click += gcnew System::EventHandler(this, &machine_vision_midterm::button5_Click);
				 // 
				 // button6
				 // 
				 this->button6->Location = System::Drawing::Point(305, 537);
				 this->button6->Name = L"button6";
				 this->button6->Size = System::Drawing::Size(107, 26);
				 this->button6->TabIndex = 15;
				 this->button6->Text = L"angle";
				 this->button6->UseVisualStyleBackColor = true;
				 this->button6->Click += gcnew System::EventHandler(this, &machine_vision_midterm::button6_Click);
				 // 
				 // label9
				 // 
				 this->label9->AutoSize = true;
				 this->label9->Location = System::Drawing::Point(740, 487);
				 this->label9->Name = L"label9";
				 this->label9->Size = System::Drawing::Size(35, 15);
				 this->label9->TabIndex = 16;
				 this->label9->Text = L"pixel";
				 // 
				 // label10
				 // 
				 this->label10->AutoSize = true;
				 this->label10->Location = System::Drawing::Point(606, 527);
				 this->label10->Name = L"label10";
				 this->label10->Size = System::Drawing::Size(35, 15);
				 this->label10->TabIndex = 17;
				 this->label10->Text = L"pixel";
				 // 
				 // label11
				 // 
				 this->label11->AutoSize = true;
				 this->label11->Location = System::Drawing::Point(602, 559);
				 this->label11->Name = L"label11";
				 this->label11->Size = System::Drawing::Size(44, 15);
				 this->label11->TabIndex = 18;
				 this->label11->Text = L"degree";
				 // 
				 // pictureBox3
				 // 
				 this->pictureBox3->Location = System::Drawing::Point(891, 24);
				 this->pictureBox3->Name = L"pictureBox3";
				 this->pictureBox3->Size = System::Drawing::Size(379, 444);
				 this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				 this->pictureBox3->TabIndex = 19;
				 this->pictureBox3->TabStop = false;
				 // 
				 // machine_vision_midterm
				 // 
				 this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
				 this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
				 this->ClientSize = System::Drawing::Size(1315, 586);
				 this->Controls->Add(this->pictureBox3);
				 this->Controls->Add(this->label11);
				 this->Controls->Add(this->label10);
				 this->Controls->Add(this->label9);
				 this->Controls->Add(this->button6);
				 this->Controls->Add(this->button5);
				 this->Controls->Add(this->button4);
				 this->Controls->Add(this->label8);
				 this->Controls->Add(this->label7);
				 this->Controls->Add(this->label6);
				 this->Controls->Add(this->label5);
				 this->Controls->Add(this->label4);
				 this->Controls->Add(this->label3);
				 this->Controls->Add(this->label2);
				 this->Controls->Add(this->label1);
				 this->Controls->Add(this->button3);
				 this->Controls->Add(this->button2);
				 this->Controls->Add(this->pictureBox2);
				 this->Controls->Add(this->button1);
				 this->Controls->Add(this->pictureBox1);
				 this->Name = L"machine_vision_midterm";
				 this->Text = L"machine_vision_midterm";
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
				 (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
				 this->ResumeLayout(false);
				 this->PerformLayout();

			 }

			 //宣告Bitmap 儲存開啟的圖
			 Bitmap^ image1;
			 Bitmap^ binarybmp;

			 //宣告為一BitmapData型態 表示像素位置
			 Imaging::BitmapData ^ ImageData1;

			 //宣告圖像區域(設定為欲讀取、欲修正的圖像區域)
			 Rectangle rect;

			 //宣告一int格式的指標
			 IntPtr ptr, ResultPtr;

			 //宣告Byte格式的指標
			 Byte* p;
			 Byte* R;
			 Byte* k;

			 int diameter;
			 float slide;

#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//宣告點陣圖的格式 
		//Bitmap^ image1;
		//new一個新的openFileDialog1開啟檔案
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		//設定Filter，用以限定使用者開啟的檔案
		openFileDialog1->Filter = "點陣圖 (*.bmp)| *.bmp| All files (*.*)| *.*";
		//預設檔案名稱為空值
		openFileDialog1->FileName = "";
		//設定跳出選擇視窗的標題名稱
		openFileDialog1->Title = "載入影像";
		//設定Filter選擇模式(依照Filter數，如本例選擇1表示起始出現的為點陣圖，選擇2表示All filts)
		openFileDialog1->FilterIndex = 1;


		//跳出檔案選擇視窗(ShowDialog)，並且如果使用者點選檔案，並且檔案名稱超過0個字元，則判斷是為True，進入處理程序
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0)
		{
			//將選取的檔案讀取並且存至Image1
			image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
			//設定rect範圍大小
			rect = Rectangle(0, 0, image1->Width, image1->Height);
			//將影像顯示在pictureBox1
			pictureBox1->Image = image1;

		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//影像轉二值化
		//宣告binaryImage為BitMap^型態
		binarybmp = gcnew Bitmap(image1->Width, image1->Height);
		//宣告grayImageData為BitmapData^型態，表示像素資料位置
		Imaging::BitmapData^ binarybmpData;
		//鎖定欲處理像素位置
		binarybmpData = binarybmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		//將int指標指向Image像素資料的最前面位置
		ResultPtr = binarybmpData->Scan0;
		//設定指標
		R = (Byte*)((Void*)ResultPtr);

		//鎖定原圖欲處理像素位置
		ImageData1 = image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		//將int指標指向原圖像素資料最前面位置
		ptr = ImageData1->Scan0;
		//設定指標
		p = (Byte*)((Void*)ptr);

		int threshold = 50;

		//瀏覽所有像素點，取用像素，處理像素區域
		for (int y = 0; y < image1->Height; y++)
		{
			for (int x = 0; x < image1->Width; x++)
			{

				if (p[0] > 50) {
					p[0] = 255;
				}
				else {
					p[0] = 0;
				}
				R[0] = p[0];

				R++;
				p++;

			}
		}

		//解鎖像素位置
		image1->UnlockBits(ImageData1);
		binarybmp->UnlockBits(binarybmpData);
		//顯示在PictureBox上
		pictureBox2->Image = binarybmp;

	}


	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Bitmap^Label = gcnew Bitmap(binarybmp->Width, binarybmp->Height);
		for (int i = 0; i < binarybmp->Width; i++) {
			for (int j = 0; j < binarybmp->Height; j++) {
				Color set = binarybmp->GetPixel(i, j);
				Label->SetPixel(i, j, set);
			}
		}

		for (int i = 0; i <binarybmp->Width; i++) {
			int j = 0;
			Color set = Color::FromArgb(255, 255, 255);
			Label->SetPixel(i, j, set);
		}
		for (int i = 0; i < binarybmp->Width; i++) {
			int j = binarybmp->Height - 1;
			Color set = Color::FromArgb(255, 255, 255);
			Label->SetPixel(i, j, set);
		}

		for (int j = 0; j < binarybmp->Height; j++) {
			int i = 0;
			Color set = Color::FromArgb(255, 255, 255);
			Label->SetPixel(i, j, set);
		}

		for (int j = 0; j < binarybmp->Height; j++) {
			int i = binarybmp->Width - 1;
			Color set = Color::FromArgb(255, 255, 255);
			Label->SetPixel(i, j, set);
		}


		int L[5000];
		for (int i = 0; i < 5000; i++) {
			L[i] = 0;
		}
		int check = 1;
		int color[5000][3];
		for (int i = 0; i < 5000; i++) {
			for (int j = 0; j < 3; j++) {
				color[i][j] = 0;
			}
		}

		int r = 1, g = 1, b = 1;
		for (int j = 1; j < Label->Height; j++) {
			for (int i = 1; i < Label->Width; i++) {
				if (Label->GetPixel(i, j).R == 0) {


					if (((Label->GetPixel(i - 1, j).R == 0) || (Label->GetPixel(i - 1, j).R == 255)) && ((Label->GetPixel(i, j - 1).R == 0) || (Label->GetPixel(i, j - 1).R == 255))) {

						L[check] = check;
						Color set = Color::FromArgb(r, g, b);
						Label->SetPixel(i, j, set);
						color[check][0] = r;
						color[check][1] = g;
						color[check][2] = b;

						check++;
						r += 1;
						if (r == 250) {
							r = 1;
							g += 1;
							if (g == 250) {
								g = 1;
								b += 1;
							}
						}
					}
					else if (((Label->GetPixel(i, j - 1).R != 0) && (Label->GetPixel(i, j - 1).R != 255)) && ((Label->GetPixel(i - 1, j).R == 0) || (Label->GetPixel(i - 1, j).R == 255))) {

						Color set = Label->GetPixel(i, j - 1);
						Label->SetPixel(i, j, set);
					}

					else if (((Label->GetPixel(i - 1, j).R != 0) && (Label->GetPixel(i - 1, j).R != 255)) && ((Label->GetPixel(i, j - 1).R == 0) || (Label->GetPixel(i, j - 1).R == 255))) {

						Color set = Label->GetPixel(i - 1, j);
						Label->SetPixel(i, j, set);
					}
					else if (((Label->GetPixel(i, j - 1)).R == Label->GetPixel(i - 1, j).R) && ((Label->GetPixel(i, j - 1)).G == Label->GetPixel(i - 1, j).G) && ((Label->GetPixel(i, j - 1)).B == Label->GetPixel(i - 1, j).B)) {

						Color set = Label->GetPixel(i, j - 1);
						Label->SetPixel(i, j, set);
					}
					else if (((Label->GetPixel(i, j - 1)).R != Label->GetPixel(i - 1, j).R) || ((Label->GetPixel(i, j - 1)).G != Label->GetPixel(i - 1, j).G) || ((Label->GetPixel(i, j - 1)).B != Label->GetPixel(i - 1, j).B)) {

						int checkup, checkleft;
						Color set = Label->GetPixel(i, j - 1);
						Label->SetPixel(i, j, set);
						for (int x = 1; x < 5000; x++) {
							if ((color[x][0] == Label->GetPixel(i, j - 1).R) && (color[x][1] == Label->GetPixel(i, j - 1).G) && (color[x][2] == Label->GetPixel(i, j - 1).B)) {

								checkup = x;
								break;
							}
						}
						for (int x = 1; x < 5000; x++) {
							if ((color[x][0] == Label->GetPixel(i - 1, j).R) && (color[x][1] == Label->GetPixel(i - 1, j).G) && (color[x][2] == Label->GetPixel(i - 1, j).B)) {

								checkleft = x;
								break;
							}

						}
						int pre = L[checkleft];
						L[checkleft] = L[checkup];
						for (int x = 1; x < 5000; x++) {
							if (L[x] == 0) {
								break;
							}
							else if (L[x] == pre) {
								L[x] = L[checkup];
							}
						}
					}
				}
			}
		}
		//part two 
		for (int j = 1; j < Label->Height; j++) {
			for (int i = 1; i < Label->Width; i++) {
				if (Label->GetPixel(i, j).R != 255) {


					int selfcheck;
					for (int x = 1; x < 5000; x++) {
						if ((color[x][0] == Label->GetPixel(i, j).R) && (color[x][1] == Label->GetPixel(i, j).G) && (color[x][2] == Label->GetPixel(i, j).B)) {
							selfcheck = x;
							break;
						}
					}
					Color set = Color::FromArgb(color[L[selfcheck]][0], color[L[selfcheck]][1], color[L[selfcheck]][2]);
					Label->SetPixel(i, j, set);


				}
			}
		}

		this->pictureBox2->Image = Label;


		//篩選
		Bitmap^New = gcnew Bitmap(Label->Width, Label->Height);
		int n = 0;
		for (int i = 0; i < New->Width; i++) {
			for (int j = 0; j < New->Height; j++) {
				Color set = Label->GetPixel(i, j);
				New->SetPixel(i, j, set);
			}
		}

		Bitmap^New2 = gcnew Bitmap(Label->Width, Label->Height);
		for (int i = 0; i < New2->Width; i++) {
			for (int j = 0; j < New2->Height; j++) {
				Color set = Label->GetPixel(i, j);
				New2->SetPixel(i, j, set);
			}
		}

		for (int j = 0; j < New->Height; j++) {
			for (int i = 0; i < New->Width; i++) {
				if ((New->GetPixel(i, j).R != 255) && ((New->GetPixel(i, j).R != 0))) {

					Color set = New->GetPixel(i, j);
					int number = 0;
					for (int x = 0; x < New->Width; x++) {
						for (int y = 0; y < New->Height; y++) {
							if (New->GetPixel(x, y) == set) {
								number++;
							}

						}
					}

					if ((number > 270 & number < 550)) {
						for (int y = 0; y < New2->Height; y++) {
							for (int x = 0; x < New2->Width; x++) {
								if ((New2->GetPixel(x, y).R != 255) && ((New2->GetPixel(i, j).R != 0))) {
									if ((New2->GetPixel(x, y) == set)) {
										Color get = Color::FromArgb(0, 0, 0);
										New->SetPixel(x, y, get);
									}
								}
							}
						}
						n++;
					}
					else {
						for (int y = 0; y < New2->Height; y++) {
							for (int x = 0; x < New2->Width; x++) {
								if ((New2->GetPixel(x, y).R != 255) && ((New2->GetPixel(i, j).R != 0))) {
									if ((New2->GetPixel(x, y) == set)) {
										Color get = Color::FromArgb(255, 255, 255);
										New->SetPixel(x, y, get);

									}
								}
							}
						}
					}
				}
			}
		}

		int d, dmin;
		int dmax = 0;
		int sum = 0;
		for (int x = 0; x < New->Width; x++)  //掃垂直  if holes are vertical change x,y  
		{
			for (int y = 0; y < New->Height; y++)
			{
				if (New->GetPixel(x, y).R == 0) {
					sum++;
				}
				else if (New->GetPixel(x, y).R == 255) {
				}
			}

			if (sum >= 0) { dmin = sum; }
			if (dmax <= dmin) { dmax = sum; }
			else if (dmax > dmin) { dmax = dmax; }
			sum = 0;
		}

		
		this->label2->Visible = true;
		this->label4->Visible = true;
		this->label2->Text = "" + n + "";
		this->label4->Text = "" + dmax +"";

		diameter = dmax;
		 Bitmap^result= New;
		pictureBox3->Image = result;
	}
	
		
	

		
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int kernely[9] = { -1,0,1,-2,0,2,-1,0,1 };
		int kernelx[9] = { -1,-2,-1,0,0,0,1,2,1 };
		int32_t* data = new int32_t[image1->Width * image1->Height];
		int32_t* dataPointer = data;


		binarybmp = gcnew Bitmap(image1->Width, image1->Height);
		//宣告grayImageData為BitmapData^型態，表示像素資料位置
		Imaging::BitmapData^ binarybmpData;
		//鎖定欲處理像素位置
		binarybmpData = binarybmp->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		//將int指標指向Image像素資料的最前面位置
		ResultPtr = binarybmpData->Scan0;
		//設定指標
		k = (Byte*)((Void*)ResultPtr);

		//鎖定原圖欲處理像素位置
		ImageData1 = image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
		//將int指標指向原圖像素資料最前面位置
		ptr = ImageData1->Scan0;
		//設定指標
		p = (Byte*)((Void*)ptr);

		Byte* r[9];

		for (int y = 0; y < image1->Height; y++) {
			for (int x = 0; x < image1->Width; x++) {
				int sumx = 0;
				int sumy = 0;

				//最外圍像素不處理
				if (y > 0 && x > 0 && y < image1->Height - 1 && x < image1->Width - 1)
				{

					int Masksize = 0;
					int kernelindex = 0;
					//尋訪3X3遮罩的九個像素 並將像素值存下來
					for (int i = -1; i <= 1; i++)
					{
						for (int j = -1; j <= 1; j++)
						{
							//指標指向目標像素位址
							r[Masksize] = (Byte*)(Void*)p + i * image1->Width + j;
							//儲存像素
							sumx += (int)r[Masksize][0] * kernelx[kernelindex];
							sumy += (int)r[Masksize][0] * kernely[kernelindex];
							Masksize++;
							kernelindex++;
						}
					}
				}
				dataPointer[0] = abs(sumx) + abs(sumy);
				if (dataPointer[0] > 255) {
					dataPointer[0] = 255;
				}
				k[0] = dataPointer[0];
				p++;
				k++;
				dataPointer++;
			}
		}



		/*for (int y = 1; y < (grayImage->Height) - 1; y++) {
		for (int x = 1; x < (grayImage->Width) - 1; x++) {
		int sumx = 0;
		int sumy = 0;
		int kernalindex = 0;
		for (int J = -1; J <= 1; J++) {
		for (int I = -1; I <= 1; I++) {

		sumx += pix[I + x][J + y] * kernelx[kernalindex];
		sumy += pix[I + x][J + y] * kernely[kernalindex];
		kernalindex++;
		}
		}
		*dx = sumx;
		*dy = sumy;
		dx++;
		dy++;
		}
		}*/

		/*for (int y = 1; y < (grayImage->Height) - 1; y++) {
		for (int x = 1; x < (grayImage->Width) - 1; x++) {
		*SUM = abs(*dx) + abs(*dy);
		if (*SUM > 255) {
		*SUM = 255;
		}
		else if (*SUM < 0)
		{
		*SUM = 0;
		}
		k[0] = SUM[0];
		dx++;
		dy++;
		SUM++;
		k++;
		}
		}*/


		//解鎖像素位置
		image1->UnlockBits(ImageData1);
		binarybmp->UnlockBits(binarybmpData);
		//顯示在PictureBox上
		pictureBox2->Image = binarybmp;

	}


	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		int x, y;
		int n = 0;
		int length;

		if (binarybmp->GetPixel(320, 240).R == 0)
		{
			x = 320;
			y = 240;
		 }
		else if (binarybmp->GetPixel(320, 240).R == 255)
		{
			for (int left = 1; left < 100; left++) 
			{
				length = 320 - left;

				if (binarybmp->GetPixel(length, 240).R == 0)
				{
					x = 320 - length;
					y = 240;
					left = 100;
				
				}
			}
		}

		for (int i=x ; i>0; i--)
		{
			if (binarybmp->GetPixel(i,y).R==255)
			{
				n++;
			}

			else if (binarybmp->GetPixel(i, y).R == 0)
			{
				if (n !=0)
				{
					break;
				}

				else if (n == 0)
				{

				}
			}
		}

		int width = n*cos(slide*(PI) / 180);
		this->label6->Visible = true;
		this->label6->Text = "" + width + "";

	}



   private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	   int a; ////上方
	   int b;
	   int c;  ////下
	   int d;

	   for (int j = 0; j < binarybmp->Height; j++)
	   {
		   for (int i = 0; i < binarybmp->Width; i++)
		   {
			   int KK = binarybmp->GetPixel(i, j).R;
			   if (KK == 0)
			   {
				   a = i;
				   b = j + diameter / 2;
				   j = binarybmp->Height;
				   i = binarybmp->Width;
			   }
		   }
	   }
	   for (int j = binarybmp->Height - 1; j >0; j--)
	   {
		   for (int i = binarybmp->Width - 1; i >0; i--)
		   {
			   if (binarybmp->GetPixel(i, j).R == 0)
			   {
				   c = i;
				   d = j - diameter / 2;
				   j = 0;
				   i = 0;
			   }
		   }
	   }
	   float w = abs(a - c);
	   float h = abs(b - d);
	   slide = (atan(h / w) * 180) / PI;
	   
	   this->label8->Visible = true;
	   this->label8->Text = ""+slide+"" ;

    }

};
}
