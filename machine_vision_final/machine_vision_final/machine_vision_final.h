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

namespace machine_vision_final {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// machine_vision_final ���K�n
	/// </summary>
	public ref class machine_vision_final : public System::Windows::Forms::Form
	{
	public:
		machine_vision_final(void)
		{
			InitializeComponent();
			//
			//TODO:  �b���[�J�غc�禡�{���X
			//
		}

	protected:
		/// <summary>
		/// �M������ϥΤ����귽�C
		/// </summary>
		~machine_vision_final()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	private:
		/// <summary>
		/// �]�p�u��һݪ��ܼơC
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����]�p�u��䴩�һݪ���k - �ФŨϥε{���X�s�边�ק�
		/// �o�Ӥ�k�����e�C
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(520, 34);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(61, 61);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(33, 34);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(436, 299);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(758, 34);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(61, 61);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(491, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(180, 30);
			this->button1->TabIndex = 3;
			this->button1->Text = L"open template image";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &machine_vision_final::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(33, 339);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(180, 30);
			this->button2->TabIndex = 4;
			this->button2->Text = L"open test image";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &machine_vision_final::button2_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(786, 339);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(188, 30);
			this->button5->TabIndex = 7;
			this->button5->Text = L"SSD+TSS";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &machine_vision_final::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(786, 375);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(188, 31);
			this->button6->TabIndex = 8;
			this->button6->Text = L"PDF+Bhattacharyya+TSS";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &machine_vision_final::button6_Click);
			// 
			// machine_vision_final
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(998, 442);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"machine_vision_final";
			this->Text = L"machine_vision_final";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		//�ŧiBitmap �x�s�}�Ҫ���
		Bitmap^ image1;
		Bitmap^ image2;
		Bitmap^ binarybmp;

		//�ŧi���@BitmapData���A ��ܹ�����m
		Imaging::BitmapData ^ ImageData1;

		//�ŧi�Ϲ��ϰ�(�]�w����Ū���B���ץ����Ϲ��ϰ�)
		Rectangle rect;

		//�ŧi�@int�榡������
		IntPtr ptr, ResultPtr;

		//�ŧiByte�榡������
		Byte* p;
		Byte* R;
		Byte* k;
		
#pragma endregion

	
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//�ŧi�I�}�Ϫ��榡 
		//Bitmap^ image1;
		//new�@�ӷs��openFileDialog1�}���ɮ�
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		//�]�wFilter�A�ΥH���w�ϥΪ̶}�Ҫ��ɮ�
		openFileDialog1->Filter = "�I�}�� (*.bmp)| *.bmp| All files (*.*)| *.*";
		//�w�]�ɮצW�٬��ŭ�
		openFileDialog1->FileName = "";
		//�]�w���X��ܵ��������D�W��
		openFileDialog1->Title = "���J�v��";
		//�]�wFilter��ܼҦ�(�̷�Filter�ơA�p���ҿ��1��ܰ_�l�X�{�����I�}�ϡA���2���All filts)
		openFileDialog1->FilterIndex = 1;


		//���X�ɮ׿�ܵ���(ShowDialog)�A�åB�p�G�ϥΪ��I���ɮסA�åB�ɮצW�ٶW�L0�Ӧr���A�h�P�_�O��True�A�i�J�B�z�{��
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog1->FileName->Length > 0)
		{
			//�N������ɮ�Ū���åB�s��Image1
			image1 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog1->FileName));
			//�]�wrect�d��j�p
			rect = Rectangle(0, 0, image1->Width, image1->Height);
			//�N�v����ܦbpictureBox1
			pictureBox1->Image = image1;
		}
	}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	//�ŧi�I�}�Ϫ��榡 
	//Bitmap^ image1;
	//new�@�ӷs��openFileDialog1�}���ɮ�
	OpenFileDialog^ openFileDialog2 = gcnew OpenFileDialog;
	//�]�wFilter�A�ΥH���w�ϥΪ̶}�Ҫ��ɮ�
	openFileDialog2->Filter = "�I�}�� (*.bmp)| *.bmp| All files (*.*)| *.*";
	//�w�]�ɮצW�٬��ŭ�
	openFileDialog2->FileName = "";
	//�]�w���X��ܵ��������D�W��
	openFileDialog2->Title = "���J�v��";
	//�]�wFilter��ܼҦ�(�̷�Filter�ơA�p���ҿ��1��ܰ_�l�X�{�����I�}�ϡA���2���All filts)
	openFileDialog2->FilterIndex = 1;


	//���X�ɮ׿�ܵ���(ShowDialog)�A�åB�p�G�ϥΪ��I���ɮסA�åB�ɮצW�ٶW�L0�Ӧr���A�h�P�_�O��True�A�i�J�B�z�{��
	if (openFileDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK && openFileDialog2->FileName->Length > 0)
	{
		//�N������ɮ�Ū���åB�s��Image1
		image2 = safe_cast<Bitmap^>(Image::FromFile(openFileDialog2->FileName));
		//�]�wrect�d��j�p
		rect = Rectangle(0, 0, image2->Width, image2->Height);
		//�N�v����ܦbpictureBox1
		pictureBox2->Image = image2;

	}
}
/*private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	////�Ȧs�ϪŶ�
	Bitmap ^ temp1_Image;
	temp1_Image = gcnew Bitmap(image1->Width, image1->Height); //�ͦ��@�i���e��image�@�˪�Bitmap

	Imaging::BitmapData ^ temp1_Image_Data;
	temp1_Image_Data = temp1_Image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);

	IntPtr ptr, temp1_Ptr;
	temp1_Ptr = temp1_Image_Data->Scan0;  //�Nint���Ы��VImage������ƪ��̫e����m
	Byte* q = (Byte*)((Void*)temp1_Ptr); //�]�w����

										////��ϪŶ�
	ImageData1 = image1->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image1->PixelFormat);
	ptr = ImageData1->Scan0; //�Nint���Ы��VImage������ƪ��̫e����m
	Byte* p = (Byte*)((Void*)ptr); //�]�w����

								   //���а}�C
	Byte* r[9];

	//�x�s�����P��m�s���}�C
	int Array[2][9] = { 0 };
	int temp[2];

	//�s���Ҧ������I�A���ι����A�B�z�����ϰ�
	for (int y = 0; y < image1->Height; y++) {
		for (int x = 0; x < image1->Width; x++) {

			//�̥~�򹳯����B�z
			if (y > 0 && x > 0 && y < image1->Height - 1 && x < image1->Width - 1)
			{

				int Masksize = 0;
				//�M�X3X3�B�n���E�ӹ��� �ñN�����Ȧs�U��
				for (int i = -1; i <= 1; i++)
				{
					for (int j = -3; j <= 3; j += 3)
					{
						//���Ы��V�ؼй�����}
						r[Masksize] = (Byte*)(Void*)p + i * image1->Width * 3 + j;
						//�x�s����
						Array[0][Masksize] = r[Masksize][0] + r[Masksize][1] + r[Masksize][2];
						//�x�s�����s��
						Array[1][Masksize] = Masksize;
						Masksize++;
					}
				}

				int min;
				//�u�ƨ�Ĥ��� �]���Ĥ��ӴN�O����� ���Υ����Ƨ�
				for (int n = 0; n < 5; ++n)
				{
					min = n;
					//�ϥή�w�ƧǪk
					for (int o = n + 1; o < 9; ++o)
					{
						if (Array[0][o] < Array[0][min])
							min = o;

					}
					//temp�Ȧs�����P�s��
					temp[0] = Array[0][n];
					temp[1] = Array[1][n];

					//�N���p�������ȻP�s���h��ثe�B�z�쪺��mn
					Array[0][n] = Array[0][min];
					Array[1][n] = Array[1][min];

					//�Ntemp��^�h ��swap�洫
					Array[0][min] = temp[0];
					Array[1][min] = temp[1];
				}

				//���Ƨǧ���5�ӹ����ȱo���Ц�} �N��}��B G R���ثe����
				q[0] = r[Array[1][4]][0];
				q[1] = r[Array[1][4]][1];
				q[2] = r[Array[1][4]][2];
			}
			else
			{
				q[0] = p[0];
				q[1] = p[1];
				q[2] = p[2];
			}
			q += 3;
			p += 3;
		}
	}

	//���깳����m
	image1->UnlockBits(ImageData1);
	temp1_Image->UnlockBits(temp1_Image_Data);
	//��ܦbPictureBox�W
	pictureBox1->Image = temp1_Image;
}*/
/*private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	////�Ȧs�ϪŶ�
	Bitmap ^ temp2_Image;
	temp2_Image = gcnew Bitmap(image2->Width, image2->Height); //�ͦ��@�i���e��image�@�˪�Bitmap

	Imaging::BitmapData ^ temp2_Image_Data;
	temp2_Image_Data = temp2_Image->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);

	IntPtr ptr, temp2_Ptr;
	temp2_Ptr = temp2_Image_Data->Scan0;  //�Nint���Ы��VImage������ƪ��̫e����m
	Byte* q = (Byte*)((Void*)temp2_Ptr); //�]�w����

										////��ϪŶ�
	ImageData1 = image2->LockBits(rect, System::Drawing::Imaging::ImageLockMode::ReadWrite, image2->PixelFormat);
	ptr = ImageData1->Scan0; //�Nint���Ы��VImage������ƪ��̫e����m
	Byte* p = (Byte*)((Void*)ptr); //�]�w����

								   //���а}�C
	Byte* r[9];

	//�x�s�����P��m�s���}�C
	int Array[2][9] = { 0 };
	int temp[2];

	//�s���Ҧ������I�A���ι����A�B�z�����ϰ�
	for (int y = 0; y < image2->Height; y++) {
		for (int x = 0; x < image2->Width; x++) {

			//�̥~�򹳯����B�z
			if (y > 0 && x > 0 && y < image2->Height - 1 && x < image2->Width - 1)
			{

				int Masksize = 0;
				//�M�X3X3�B�n���E�ӹ��� �ñN�����Ȧs�U��
				for (int i = -1; i <= 1; i++)
				{
					for (int j = -3; j <= 3; j += 3)
					{
						//���Ы��V�ؼй�����}
						r[Masksize] = (Byte*)(Void*)p + i * image2->Width * 3 + j;
						//�x�s����
						Array[0][Masksize] = r[Masksize][0] + r[Masksize][1] + r[Masksize][2];
						//�x�s�����s��
						Array[1][Masksize] = Masksize;
						Masksize++;
					}
				}

				int min;
				//�u�ƨ�Ĥ��� �]���Ĥ��ӴN�O����� ���Υ����Ƨ�
				for (int n = 0; n < 5; ++n)
				{
					min = n;
					//�ϥή�w�ƧǪk
					for (int o = n + 1; o < 9; ++o)
					{
						if (Array[0][o] < Array[0][min])
							min = o;

					}
					//temp�Ȧs�����P�s��
					temp[0] = Array[0][n];
					temp[1] = Array[1][n];

					//�N���p�������ȻP�s���h��ثe�B�z�쪺��mn
					Array[0][n] = Array[0][min];
					Array[1][n] = Array[1][min];

					//�Ntemp��^�h ��swap�洫
					Array[0][min] = temp[0];
					Array[1][min] = temp[1];
				}

				//���Ƨǧ���5�ӹ����ȱo���Ц�} �N��}��B G R���ثe����
				q[0] = r[Array[1][4]][0];
				q[1] = r[Array[1][4]][1];
				q[2] = r[Array[1][4]][2];
			}
			else
			{
				q[0] = p[0];
				q[1] = p[1];
				q[2] = p[2];
			}
			q += 3;
			p += 3;
		}
	}

	//���깳����m
	image2->UnlockBits(ImageData1);
	temp2_Image->UnlockBits(temp2_Image_Data);
	//��ܦbPictureBox�W
	pictureBox2->Image = temp2_Image;
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

}*/

private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	
	int mask = 61;
	int b = 1;
	int minimage1;
	int minimage1X, minimage1Y;
	int centerX1, centerY1;


	Bitmap^ image11 = gcnew Bitmap(mask, mask);
	Bitmap^ candidate1 = gcnew Bitmap(mask, mask);
	Rectangle rec(0, 0, 320, 240);
	Pen^ pen = gcnew Pen(Color::Red, 2);
	for (int y = 0; y < 9; y++) {
		for (int x = 0; x < 13; x++) {
			int min = 0;
			int s = 3;
			int cal = 0;
			int a = 1;
			int centerX, centerY;
			int realX, realY;
			centerX = x * 20;
			centerY = y * 20;

			while (s > 0) {

				for (int i = -1; i < 2; i++) {
					for (int j = -1; j < 2; j++) {
						cal = 0;

						realX = centerX + i * s * 5;
						realY = centerY + j * s * 5;

						if ((realX >= 0) && (realX < (320 - mask + 1)) && (realY >= 0) && (realY < (240 - mask + 1))) {
							
							for (int col = 0; col < mask; col++) {
								for (int row = 0; row < mask; row++) {
									Color set = image2->GetPixel(realX + row, realY + col);
									candidate1->SetPixel(row, col, set);
								}
							}
							for (int col = 0; col < 61; col++) {
								for (int row = 0; row < 61; row++) {
									cal += pow(image1->GetPixel(row, col).R - candidate1->GetPixel(row, col).R, 2);
									//cal += pow(image1->GetPixel(row, col).G - candidate1->GetPixel(row, col).G, 2);
									//cal += pow(image1->GetPixel(row, col).B - candidate1->GetPixel(row, col).B, 2);			
								}
							}
							if (a == 1) {
								min = cal;
								a++;
							}
							if (cal <= min) {
								min = cal;
								centerX1 = realX;
								centerY1 = realY;
							}
						}
					}
				}
				centerX = centerX1;                    
				centerY = centerY1;
				s--;
			}
			if (b == 1) {
				minimage1 = min;
				b++;
			}
			if (min <= minimage1) {
				minimage1 = min;
				minimage1X = centerX;
				minimage1Y = centerY;
			}
			Graphics^ canvus3 = pictureBox2->CreateGraphics();
			canvus3->DrawImage(image2, rec);
			canvus3->DrawRectangle(pen, minimage1X, minimage1Y, 61, 61);


		}
	}

	for (int i1 = 0; i1 < 61; i1++) {
		for (int j1 = 0; j1 < 61; j1++) {
			Color set1 = image2->GetPixel(minimage1X + j1, minimage1Y + i1);
			image11->SetPixel(j1, i1, set1);
		}
	}
	pictureBox3->Image = image11;
}

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	Bitmap^ grayscale;
	Bitmap^gray;
	grayscale = gcnew Bitmap(image2->Width, image2->Height);
	for (int x = 0; x < (image2->Width); x++) {
		for (int y = 0; y < (image2->Height); y++) {
			Color get = image2->GetPixel(x, y);
			int r, g, b, L;
			r = get.R;
			g = get.G;
			b = get.B;
			L = 0.299 * r + 0.587 * g + 0.114 * b;
			Color Light = Color::FromArgb(L, L, L);
			grayscale->SetPixel(x, y, Light);
		}
	}
	gray = grayscale;

	Bitmap^ grayscale1;
	Bitmap^gray1;
	grayscale1 = gcnew Bitmap(image1->Width, image1->Height);
	for (int x = 0; x < (image1->Width); x++) {
		for (int y = 0; y < (image1->Height); y++) {
			Color get = image1->GetPixel(x, y);
			int r, g, b, L;
			r = get.R;
			g = get.G;
			b = get.B;
			L = 0.299 * r + 0.587 * g + 0.114 * b;
			Color Light = Color::FromArgb(L, L, L);
			grayscale1->SetPixel(x, y, Light);
		}
	}
	gray1 = grayscale1;


	int source2[256] = { 0 };
	float probability2[256] = { 0 };
	for (int i = 0; i < gray1->Width; i++) {
		for (int j = 0; j < gray1->Height; j++) {
			source2[gray1->GetPixel(i, j).R]++;
		}
	}

	for (int i = 0; i < 256; i++) {
		probability2[i] = source2[i] / (61.0 * 61.0);
	
	}
	int mask = 61;
	int b = 1;
	float mintarget;
	int mintargetX, mintargetY;
	int centerX1, centerY1;

	Bitmap^ image1 = gcnew Bitmap(mask, mask);
	Bitmap^ candidate1 = gcnew Bitmap(mask, mask);
	Rectangle rec(0, 0, 320, 240);
	Pen^ pen = gcnew Pen(Color::Red, 2);

	for (int y = 0; y < 9; y++) {
		for (int x = 0; x < 13; x++) {
			float cal, max = 0;
			int s = 3;
			int centerX, centerY;
			int realX, realY;

			centerX = x * 20;
			centerY = y * 20;

			while (s > 0) {
				int a = 1;
				for (int i = -1; i < 2; i++) {
					for (int j = -1; j < 2; j++) {

						realX = centerX + i * s * 3;
						realY = centerY + j * s * 3;

						if ((realX >= 0) && (realX < (320 - mask + 1)) && (realY >= 0) && (realY < (240 - mask + 1))) {
							
							cal = 0;
							int source1[256] = { 0 };
							float probability1[256] = { 0 };

							for (int col = 0; col < mask; col++) {
								for (int row = 0; row < mask; row++) {
									source1[gray->GetPixel(realX + row, realY + col).R]++;
								}
							}

							for (int i = 0; i < 256; i++) {
								probability1[i] = source1[i] / (61.0 * 61.0);
						
							}

							for (int i = 0; i < 256; i++) {
								cal += pow(probability1[i], 0.5) * pow(probability2[i], 0.5);
								
							}
							if (a == 1) {
								max = cal;
								a++;
							}
							if (cal > max) {
								max = cal;
								centerX1 = realX;
								centerY1 = realY;
							}
						}
					}
				}
				centerX = centerX1;               
				centerY = centerY1;
				s--;
			}
			if (b == 1) {
				mintarget = max;
				b++;
			}
			if (max > mintarget) {
				mintarget = max;
				mintargetX = centerX;
				mintargetY = centerY;
			}	
		}
	}
	Graphics^ canvus3 = pictureBox2->CreateGraphics();
	canvus3->DrawImage(image2, rec);
	canvus3->DrawRectangle(pen, mintargetX, mintargetY, 61, 61);

	for (int i1 = 0; i1 < 61; i1++) {
		for (int j1 = 0; j1 < 61; j1++) {
			Color set1 = image2->GetPixel(mintargetX + j1, mintargetY + i1);
			image1->SetPixel(j1, i1, set1);
		}
	}
	pictureBox3->Image = image1;

}
};
}
