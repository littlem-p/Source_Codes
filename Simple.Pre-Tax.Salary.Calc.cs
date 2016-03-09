/*
 Simple Pre-tax Salary Calculator - version 1.1
 Created By: Little M Programming*
 Last Edited: 3-8-16
 
 */


using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Threading;
using System.Windows.Forms;
using System.Media;
using System.IO;
using System.Diagnostics;

namespace Simple_Pre_Tax_Salary_Calc
{
    public partial class Form1 : Form
    {
      

        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void label7_Click(object sender, EventArgs e)
        {

        }

        private void textBox6_TextChanged(object sender, EventArgs e)
        {

            

        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {
            if (System.Text.RegularExpressions.Regex.IsMatch(textBox1.Text, "[^0-9.]"))
            {
                SystemSounds.Exclamation.Play(); // To play a beep
                MessageBox.Show("Please enter only numeric values.", "Input Error!");
                textBox1.Text = textBox1.Text.Remove(textBox1.Text.Length - 1);
            }

        }

     
        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            if (System.Text.RegularExpressions.Regex.IsMatch(textBox2.Text, "[^0-9.]"))
            {
                SystemSounds.Exclamation.Play(); // To play a beep
                MessageBox.Show("Please enter only numeric values.", "Input Error!");
                textBox2.Text = textBox2.Text.Remove(textBox2.Text.Length - 1);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            //allows user to press Enter key to submit values
            this.AcceptButton = button1;


            double WagePerHour = 00.00;
            double HoursPerWeek = 00;
            double DailyIncome, WeeklyIncome, MonthlyIncome, YearlyIncome;

            // Yells at user, if they don't input vaules in textboxes
            // before calculatiing.
            if (textBox2.Text.Length == 0 && textBox1.Text.Length == 0)
            {
                //changes the empty textboxes to red
                textBox1.BackColor = Color.Red;
                textBox2.BackColor = Color.Red;
                SystemSounds.Exclamation.Play(); // To play a beep
                MessageBox.Show("Please input a numeric value before calculating.", "Input Error!");

                // turns the textboxes back to normal
                textBox1.BackColor = Color.Empty;
                textBox2.BackColor = Color.Empty;
           }

            else if (textBox2.Text.Length == 0)
            {
                //changes the empty textbox to red
                textBox2.BackColor = Color.Red;
                SystemSounds.Exclamation.Play(); // To play a beep

                MessageBox.Show("Please input a numeric value before calculating.", "Input Error!");

                // turns the text box back to normal
                textBox2.BackColor = Color.Empty;
            }

            else if (textBox1.Text.Length == 0)
            {
                //changes the empty textbox to red
                textBox1.BackColor = Color.Red;
                SystemSounds.Exclamation.Play(); // To play a beep
                MessageBox.Show("Please input a numeric value before calculating.", "Input Error!");

                // turns the text box back to normal
                textBox1.BackColor = Color.Empty;
            }

           else
           { 
            // assigns the variable to the textboxes
            WagePerHour = double.Parse(textBox1.Text);
            HoursPerWeek = double.Parse(textBox2.Text);

             // disables the ability for the user to edit input after summitting
            textBox1.Enabled = false;
            textBox2.Enabled = false;
            button1.Enabled = false;
               
            // multipiles wage per hour and hours per week
           DailyIncome = (int) WagePerHour * HoursPerWeek / 5; // daily income for 5 days a week
           WeeklyIncome = (int)WagePerHour * HoursPerWeek;
           MonthlyIncome = (int)WeeklyIncome * 4;
           YearlyIncome = (int)WeeklyIncome * 52;
          
            // shows output of DailyIncome in textbox6
           textBox6.Text = "$ " + textBox6.Text + DailyIncome.ToString("#,##0");

           // shows output of WeeklyIncome in textbox3
           textBox3.Text = "$ " + textBox3.Text + WeeklyIncome.ToString("#,##0");

           // shows output of MonthlyIncome in textbox4
           textBox4.Text = "$ " + textBox4.Text + MonthlyIncome.ToString("#,##0");

           // shows output of YearlyIncome in textbox5
           textBox5.Text = "$ " + textBox5.Text + YearlyIncome.ToString("#,##0"); 
           }

     

        }

        private void textBox3_TextChanged(object sender, EventArgs e)
        {

        }

        private void textBox4_TextChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {

            // enables the ability for the user to edit input after summitting
            textBox1.Enabled = true;
            textBox2.Enabled = true;
            button1.Enabled = true;

            // clears textboxes, when the clear button is pressed
            textBox1.Clear();
            textBox2.Clear();      
            textBox3.Clear();
            textBox4.Clear();
             textBox5.Clear();
             textBox6.Clear();

                 
        }

        private void textBox5_TextChanged(object sender, EventArgs e)
        {

        }

        private void aboutToolStripMenuItem_Click(object sender, EventArgs e)
        {
           

        }

        private void helpToolStripMenuItem_Click(object sender, EventArgs e)
        {
           
        }

        private void aboutToolStripMenuItem1_Click(object sender, EventArgs e)
        {
            AboutBox1 box = new AboutBox1();
            box.ShowDialog();// shows About Box when pressed
        }

        private void documentationToolStripMenuItem_Click(object sender, EventArgs e)
        {
            // Shows Documentation form

            Documentation Doc = new Documentation();
            Doc.Show();
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            Application.Exit(); // Closes application. 
        }
    }
}
