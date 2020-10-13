using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _2._33
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        private void button1_Click(object sender, EventArgs e)
        {
            int total;
            int m1,m2,m3,m5, m4;
            m1 = Convert.ToInt32(textBox1.Text);
            m2 = Convert.ToInt32(textBox2.Text);
            m3 = Convert.ToInt32(textBox3.Text);
            m4 = Convert.ToInt32(textBox4.Text);
            m5 = Convert.ToInt32(textBox5.Text);
            total = (m1 / m3) * m2 + m4 + m5;
            MessageBox.Show("總共為:"+ total.ToString()+"元");
        }
    }
}
