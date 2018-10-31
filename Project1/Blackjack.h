#pragma once
#include <string>
#include <ctime>
#include <iostream>
#include "player.h"
#include "Blackjackgame.h"

namespace Project1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{	
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			// random seed for the rng
			srand(time(NULL));
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: int i = 0;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: Blackjackgame^ bjg = gcnew Blackjackgame();
	private: int playerTotal = 0;
			 int dealerTotal = 0;
			 int pindex;
			 int pindex2;
			 int pindex3;
			 int pindex4;
			 int dindex;
			 int dindex2;
			 int dindex3;
			 int dindex4;
			 int numOfAces = 0;
			 int dnumOfAces = 0;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;

	private: System::ComponentModel::IContainer^  components;




	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(280, 51);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Set Bet";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(442, 116);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(66, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Total in Bets";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(174, 51);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(469, 143);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(194, 31);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(62, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Bet Amount";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(107, 143);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(81, 116);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Player Money";
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"images\\smallback.png";
			this->pictureBox1->Location = System::Drawing::Point(19, 240);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(99, 119);
			this->pictureBox1->TabIndex = 7;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &MyForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->ImageLocation = L"images\\smallback.png";
			this->pictureBox2->Location = System::Drawing::Point(379, 240);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(93, 119);
			this->pictureBox2->TabIndex = 8;
			this->pictureBox2->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(94, 217);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(36, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Player";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(461, 217);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(38, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Dealer";
			// 
			// pictureBox3
			// 
			this->pictureBox3->ImageLocation = L"images\\smallback.png";
			this->pictureBox3->Location = System::Drawing::Point(124, 240);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(93, 119);
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->ImageLocation = L"images\\smallback.png";
			this->pictureBox4->Location = System::Drawing::Point(478, 240);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(93, 119);
			this->pictureBox4->TabIndex = 12;
			this->pictureBox4->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(606, 24);
			this->menuStrip1->TabIndex = 13;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->exitToolStripMenuItem });
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(50, 20);
			this->toolStripMenuItem1->Text = L"Game";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::toolStripMenuItem1_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(92, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(93, 38);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 14;
			this->button2->Text = L"Hit";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(93, 67);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"Stay";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(81, 174);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 13);
			this->label9->TabIndex = 16;
			this->label9->Text = L"Card Value";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(107, 198);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 17;
			this->label8->Text = L"0";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 38);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Start Game";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(267, 143);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(0, 13);
			this->label10->TabIndex = 19;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(19, 365);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(99, 119);
			this->pictureBox5->TabIndex = 20;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(124, 365);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(93, 119);
			this->pictureBox6->TabIndex = 21;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Location = System::Drawing::Point(379, 365);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(93, 119);
			this->pictureBox7->TabIndex = 22;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Location = System::Drawing::Point(478, 365);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(93, 119);
			this->pictureBox8->TabIndex = 23;
			this->pictureBox8->TabStop = false;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(449, 174);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(59, 13);
			this->label11->TabIndex = 24;
			this->label11->Text = L"Card Value";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(469, 198);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(13, 13);
			this->label12->TabIndex = 25;
			this->label12->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(606, 583);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Blackjack";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Bet button
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		int temp = int::Parse(textBox1->Text); // store the number from user input text field
		bjg->set_bet_amount(temp); // use that number to subtract from the player's amount and add to the pot
		label2->Text = bjg->totalBetAmount.ToString(); // display the total
		label4->Text = bjg->p->money.ToString();

		
	} // bet button
	


	private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void toolStripMenuItem1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
}
private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("The goal of the game is to get a hand value of 21 to win the game and not lose bet money. Refer to the following steps:\n1. Set the bet amount; it must be >0\n2. The dealer will deal two cards\n3. Decide to stick with what you have or press the 'hit' button to add a card to your hand\n4. Your turn will end when you click 'stay'\n5. If you have a lower hand or have a hand that goes over 21, you lose the game and the bet money", 
						  "How to play");
}
// START GAME BUTTON
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
{
	// Make sure that the hasBeenUsed values in deck are all set to false before using them in start game
	for (int i = 0; i < 52; i++) {
		bjg->d->deck[i]->hasBeenUsed = false;
	}
	// RESET PLAYER MONEY
	// RESET POT MONEY
	// RESET playerTotal card value
	bjg->p->money = 250; playerTotal = 0; dealerTotal = 0;
	bjg->totalBetAmount = 0; label2->Text = "0";
	numOfAces = 0; dnumOfAces = 0;
	pictureBox4->ImageLocation = "images\\smallback.png";
	pictureBox5->ImageLocation = "images\\blank.png";
	pictureBox6->ImageLocation = "images\\blank.png";
	pictureBox7->ImageLocation = "images\\blank.png";
	pictureBox8->ImageLocation = "images\\blank.png";

	// give the player 2 random cards. We make sure to set the card's hasBeenUsed value to true after picking them so that there are no duplicates
	pindex = rand() % 52;
	while (bjg->d->deck[pindex]->hasBeenUsed)
	{
		pindex = rand() % 52;
	}
	bjg->d->deck[pindex]->hasBeenUsed = true;
	// check to see if it is an ACE
	if (pindex == 0 || pindex == 13 || pindex == 26 || pindex == 39)
	{
		if (playerTotal + 11 > 21) { playerTotal += 1; }
		else { playerTotal += 11; }
		numOfAces++;
	}
	else { playerTotal += bjg->d->deck[pindex]->cardValue; }
	// update pictures for player (picturebox 1 and 3)
	pictureBox1->ImageLocation = bjg->d->deck[pindex]->img_loc;
	
	int pindex2 = rand() % 52;
	while (bjg->d->deck[pindex2]->hasBeenUsed)
	{
		pindex2 = rand() % 52;
	}
	bjg->d->deck[pindex2]->hasBeenUsed = true;
	// check to see if it is an ACE 
	if (pindex2 == 0 || pindex2 == 13 || pindex2 == 26 || pindex2 == 39)
	{
		if (playerTotal + 11 > 21) { playerTotal += 1; }
		else { playerTotal += 11; }
		numOfAces++;
	}
	else { playerTotal += bjg->d->deck[pindex2]->cardValue; }
	pictureBox3->ImageLocation = bjg->d->deck[pindex2]->img_loc;

	// show player total
	label8->Text = playerTotal.ToString();

	// Draw a card for the dealer
	int dindex = rand() % 52;
	while (bjg->d->deck[dindex]->hasBeenUsed)
	{
		dindex = rand() % 52;
	}
	bjg->d->deck[dindex]->hasBeenUsed = true;
	if (dindex == 0 || dindex == 13 || dindex == 26 || dindex == 39)
	{
		if (dealerTotal + 11 > 21) { dealerTotal += 1; }
		else { dealerTotal += 11; }
		dnumOfAces++;
	}
	label12->Text = dealerTotal.ToString();
	// picture box 2 and 4 for dealer
	pictureBox2->ImageLocation = bjg->d->deck[dindex]->img_loc;

	// TODO: When getting blackjack on first draw, payout to the player

	// check for gamestate
	if (playerTotal == 21) 
	{
		label10->Text = "BLACKJACK"; 
	}
	else
	{
		label10->Text = "Hit or Stay?";
	}

} // START GAME BUTTON

 // HIT BUTTON
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
{
	// Give player one card into first slot
	// i will be 0 if the player just started a game
	if (i == 0 && playerTotal < 21) 
	{
		int pindex3 = rand() % 52;
		while (bjg->d->deck[pindex3]->hasBeenUsed)
		{
			pindex3 = rand() % 52;
		}
		bjg->d->deck[pindex3]->hasBeenUsed = true;
		// if it is an ace it needs to have its value checked
		if (pindex3 == 0 || pindex3 == 13 || pindex3 == 26 || pindex3 == 39)
		{
			if (playerTotal + 11 > 21) { playerTotal += 1; }
			else { playerTotal += 11; }
			numOfAces++;
		}
		else { playerTotal += bjg->d->deck[pindex3]->cardValue; }
		
		// update pictures for player pictureBox 
		pictureBox5->ImageLocation = bjg->d->deck[pindex3]->img_loc;
		// show player total
		label8->Text = playerTotal.ToString();
		i++; // this will move to the next picturebox next time the player hits
	}
	else if(i == 1 && playerTotal < 21)
	{
		int pindex4 = rand() % 52;
		while (bjg->d->deck[pindex4]->hasBeenUsed)
		{
			pindex4 = rand() % 52;
		}
		bjg->d->deck[pindex4]->hasBeenUsed = true;
		if (pindex4 == 0 || pindex4 == 13 || pindex4 == 26 || pindex4 == 39)
		{
			if (playerTotal + 11 > 21) { playerTotal += 1; }
			else { playerTotal += 11; }
			numOfAces++;
		}
		else { playerTotal += bjg->d->deck[pindex4]->cardValue; }

		// update pictures for player pictureBox 
		pictureBox6->ImageLocation = bjg->d->deck[pindex4]->img_loc;
		// show player total
		label8->Text = playerTotal.ToString();
		i = 0; // go back to the first piturebox for next round
	}
	// check if there were any aces and if the player has busted. if the player busts, use the value of 1 for Aces
	while (numOfAces > 0 && playerTotal > 21)
	{
		numOfAces--;
		playerTotal -= 10;
	}
}// HIT BUTTON

 // STAY BUTTON
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
{
	// Draw a card for the dealer
	dindex2 = rand() % 52;
	while (bjg->d->deck[dindex2]->hasBeenUsed)
	{
		dindex2 = rand() % 52;
	}
	bjg->d->deck[dindex2]->hasBeenUsed = true;
	// Check for aces
	if (dindex2 == 0 || dindex2 == 13 || dindex2 == 26 || dindex2 == 39)
	{
		if (dealerTotal + 11 > 21) { dealerTotal += 1; }
		else { dealerTotal += 11; }
		dnumOfAces++;
	}
	else { dealerTotal += bjg->d->deck[dindex2]->cardValue; }
	
	label12->Text = dealerTotal.ToString();
	// picture box 2 and 4 for dealer
	pictureBox4->ImageLocation = bjg->d->deck[dindex2]->img_loc;

	while (dnumOfAces > 0 && dealerTotal > 21)
	{
		dnumOfAces--;
		dealerTotal -= 10;
	}

	if (dealerTotal < 17) // deal again if dealer has less than a 17
	{
		
		// Draw a card for the dealer
		int dindex3 = rand() % 52;
		while (bjg->d->deck[dindex3]->hasBeenUsed)
		{
			dindex3 = rand() % 52;
		}
		bjg->d->deck[dindex3]->hasBeenUsed = true;
		// check for aces
		if (dindex3 == 0 || dindex3 == 13 || dindex3 == 26 || dindex3 == 39)
		{
			if (dealerTotal + 11 > 21) { dealerTotal += 1; }
			else { dealerTotal += 11; }
			dnumOfAces++;
		}
		else { dealerTotal += bjg->d->deck[dindex3]->cardValue; }
		
		label12->Text = dealerTotal.ToString();
		// picture box 2 and 4 for dealer
		pictureBox7->ImageLocation = bjg->d->deck[dindex3]->img_loc;

		while (dnumOfAces > 0 && dealerTotal > 21)
		{
			dnumOfAces--;
			dealerTotal -= 10;
		}
	}
	if (dealerTotal < 17) // last card for the dealer
	{
		
		// Draw a card for the dealer
		int dindex4 = rand() % 52;
		while (bjg->d->deck[dindex4]->hasBeenUsed)
		{
			dindex4 = rand() % 52;
		}
		bjg->d->deck[dindex4]->hasBeenUsed = true;
		// check for aces
		if (dindex4 == 0 || dindex4 == 13 || dindex4 == 26 || dindex4 == 39)
		{
			if (dealerTotal + 11 > 21) { dealerTotal += 1; }
			else { dealerTotal += 11; }
			dnumOfAces++;
		}
		else { dealerTotal += bjg->d->deck[dindex4]->cardValue; }

		while (dnumOfAces > 0 && dealerTotal > 21)
		{
			dnumOfAces--;
			dealerTotal -= 10;
		}

		label12->Text = dealerTotal.ToString();
		// picture box 2 and 4 for dealer
		pictureBox8->ImageLocation = bjg->d->deck[dindex4]->img_loc;
	}

	// Compare dealer total to player total
	if ((playerTotal > dealerTotal || dealerTotal > 21) && playerTotal <= 21)
	{
		label10->Text = "Player Win!";
	}
	else if (playerTotal == dealerTotal || (playerTotal > 21 && dealerTotal > 21)) 
	{
		label10->Text = "Tie!";
	}
	else
	{
		label10->Text = "Dealer Win!";
	}
	
	// TODO: Give money to player if they won, or leave it in pot if they lost
}// STAY BUTTON

};
}
