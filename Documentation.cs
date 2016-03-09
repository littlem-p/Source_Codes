using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Simple_Pre_Tax_Salary_Calc
{
    public partial class Documentation : Form
    {
        public Documentation()
        {
            InitializeComponent();
        }

        private void Documention_Load(object sender, EventArgs e)
        {
            //Shows Documentation.txt in the rich text box 

            string fileName = "Documentation.txt";

            if (System.IO.File.Exists(fileName) == true)
            {
                System.IO.StreamReader objReader;
                objReader = new System.IO.StreamReader(fileName);
                richTextBox1.Text = objReader.ReadToEnd();
                objReader.Close();

            }
            else //If file isn't in directory, error message shows.
            {
                MessageBox.Show("Error! " + fileName + " doesn't exist. Please make sure that the file is in the correct directory. The program will now close.");

                this.Close(); //Closes the form
            }


        }

        private void btnExit_Click(object sender, EventArgs e)
        {
            this.Close(); //Closes the form
        }
    }
}
