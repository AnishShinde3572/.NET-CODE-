//1.a	Create an application that obtains 4 integer values from the user and display the sum and product.

//Code:

using System;
using System.Collections.Generic; using System.Linq;
using System.Web; using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication1
{
public partial class WebForm1 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{

}
protected void Button1_Click(object sender, EventArgs e)
{
int a, b, c, d, s;
a = Convert.ToInt16(TextBox1.Text); b = Convert.ToInt16(TextBox2.Text); c = Convert.ToInt16(TextBox3.Text); d = Convert.ToInt16(TextBox4.Text); s = a + b + c + d;
TextBox5.Text = Convert.ToString(s);
}
protected void Button2_Click(object sender, EventArgs e)
{
int a, b, c, d, s;
a = Convert.ToInt16(TextBox1.Text); b = Convert.ToInt16(TextBox2.Text); c = Convert.ToInt16(TextBox3.Text); d = Convert.ToInt16(TextBox4.Text); p = a * b * c * d;
TextBox5.Text = Convert.ToString(p);
}
}
}




                                           // 1.b	(IMMUTABLE)


using System;
using System.Collections.Generic;
 
using System.Linq; using System.Web; using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication2
{
public partial class WebForm1 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{

}
protected void TextBox1_TextChanged(object sender, EventArgs e)
{ }
protected void Button1_Click(object sender, EventArgs e)
{
string str1 = TextBox1.Text; string str2 = TextBox2.Text;

	if (String.Compare(str1, str2) ==
{	0)	

"	
are	TextBox3.Text = TextBox1.Text
Equal";	+ "	and	" +	TextBox2.Text	+
		}					
		else
{					
		TextBox3.Text = TextBox1.Text	+ "	and	" +	TextBox2.Text	+
"	are	Not Equal";
}					
		}					

protected void Button2_Click(object sender, EventArgs e)
{

string str = TextBox1.Text;

if (str.Contains(TextBox2.Text))
{
TextBox3.Text = "The string " + TextBox2.Text + " was found.";
} }
protected void Button3_Click(object sender, EventArgs e)
{
string str = TextBox1.Text; TextBox3.Text = str.Substring(5, 15)
}
protected void Button4_Click(object sender, EventArgs e)
{
 


}}}
 
string[] strarray = new string[] { TextBox1.Text, TextBox2.Text }; TextBox3.Text = String.Join("\n", strarray);
 

                            //1.c	Student Registration
                            //Code:
 
using System;
using System.Collections.Generic; using System.Linq;
using System.Web; using System.Web.UI;
using System.Web.UI.WebControls;

struct student
{
public string stdid; public string stdname; public string stdclass; public string stddob;
}
namespace WebApplication3
{
public partial class WebForm1 : System.Web.UI.Page
{
static student[] s = new student[5]; static int i;

protected void Page_Load(object sender, EventArgs e)
{

}
protected void Button1_Click(object sender, EventArgs e)
{
s[i].stdid = TextBox1.Text; s[i].stdname = TextBox2.Text; s[i].stdclass = TextBox3.Text; s[i].stddob = TextBox4.Text; i++;
}
protected void Button2_Click(object sender, EventArgs e)
{
for (int j = 0; j < i; j++)
{
Response.Write("Student Id : " + s[j].stdid + "<br>"); Response.Write("Student Name : " + s[j].stdname + "<br>");
Response.Write("Student DOB : "+s[j].stddob+ "<br>"); Response.Write("Student Class : " + s[j].stdclass + "<br><br>");
}
}
}
}

                            //1.d	Fibonacci series
                                    //Code:
using System;
 
using System.Collections.Generic; using System.Linq;
using System.Web; using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication4
{
public partial class WebForm1 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{

}

protected void Button1_Click(object sender, EventArgs e)
{

int n = int.Parse(TextBox1.Text); int a = 0;
int b =1;
Response.Write("Fibonacci Series : \n "); Response.Write(" " + a); Response.Write(" " + b);
for (int i = 2; i <= n; i++)
{
int c = a + b; Response.Write(" " +c); a = b;
b = c;
}
}

protected void Button2_Click(object sender, EventArgs e)
{
Response.Redirect("~/WebForm2.aspx");
}

protected void Button3_Click(object sender, EventArgs e)
{
Response.Redirect("~/WebForm3.aspx");
}

protected void Button4_Click(object sender, EventArgs e)
{
Response.Redirect("~/WebForm4.aspx");
}

protected void Button5_Click(object sender, EventArgs e)
{
Response.Redirect("~/WebForm5.aspx");
}
}}

                                            //1.e	Vowels
                                            //Code:
using System;
using System.Collections.Generic;
 
using System.Linq; using System.Web; using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication4
{
public partial class WebForm3 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{

}

protected void Button1_Click(object sender, EventArgs e)
{
char c = Convert.ToChar(TextBox1.Text);

if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') Response.Write(c + "	is a Vowel");
 
else

}
 

Response.Write(c + "	is not a Vowel");
 

protected void Button2_Click(object sender, EventArgs e)
{
Response.Redirect("~/WebForm1.aspx");

}

                                    //1.gPrime Numbers

                                    //Code:
using System;
using System.Collections.Generic; using System.Linq;
using System.Web; using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication4
{
public partial class WebForm2 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{

}

protected void TextBox1_TextChanged(object sender, EventArgs e)
{

}

protected void Button1_Click(object sender, EventArgs e)
{
int n = int.Parse(TextBox1.Text); int i = 2;
while (i <= n - 1)
{
if (n % i == 0)
{
 
Response.Write(n + " is not a Prime Number"); break;
}
i++;
}
if (i == n)
Response.Write(n + " is a Prime Number");
}

protected void Button2_Click(object sender, EventArgs e)
{
Response.Redirect("~/WebForm1.aspx");
}
}
}






                                    //1.h Reverse Number
                                    //Code:

using System;
using System.Collections.Generic; using System.Linq;
using System.Web; using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication4
{
public partial class WebForm5 : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{

}

protected void Button1_Click(object sender, EventArgs e)
{
int n = int.Parse(TextBox1.Text);
int s = 0;

while (n != 0)
{
int d = n % 10; s = s + d;
n = n / 10;
}

TextBox3.Text = s.ToString();

}

protected void Button2_Click(object sender, EventArgs e)
{
Response.Redirect("~/WebForm1.aspx");
}
 
protected void Button3_Click(object sender, EventArgs e)
{
int n = int.Parse(TextBox1.Text);
int r = 0;

while (n != 0)
{
int d = n % 10; r = r * 10 + d; n = n / 10;
}

TextBox2.Text = r.ToString();
}
}
}

                                  //3.a	Calendar

                        //Source Code:


<asp:Calendar ID="Calendar1" runat="server" BackColor="#FFFFCC" BorderColor="#FFCC66" BorderWidth="1px" DayNameFormat="Shortest" Font-Names="Verdana" Font-Size="8pt" ForeColor="#663399" Height="287px" ShowGridLines="True" TitleFormat="Month" Width="357px">
<DayHeaderStyle BackColor="#FFCC66" Font-Bold="True" Height="1px" />
<NextPrevStyle Font-Size="9pt" ForeColor="#FFFFCC" />
<OtherMonthDayStyle ForeColor="#CC9966" />
<SelectedDayStyle BackColor="#CCCCFF" Font-Bold="True" />
<SelectorStyle BackColor="#FFCC66" />
<TitleStyle BackColor="#990000" Font-Bold="True" Font-Size="9pt" ForeColor="#FFFFCC" />
<TodayDayStyle BackColor="#FFCC66" ForeColor="White" />
</asp:Calendar>
<br />

//Code:

using System;
using System.Collections.Generic; using System.Linq;
using System.Web; using System.Web.UI;
using System.Web.UI.WebControls;

namespace WebApplication2
{
public partial class calander : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{

}

protected void Button1_Click(object sender, EventArgs e)
{
Calendar1.Caption = "SAMBARE"; Calendar1.FirstDayOfWeek = FirstDayOfWeek.Sunday; Calendar1.NextPrevFormat = NextPrevFormat.ShortMonth;
Calendar1.TitleFormat = TitleFormat.Month;

Label2.Text = "Todays Date"+Calendar1.TodaysDate.ToShortDateString();
 
Label3.Text = "Diwali Vacation Start: 10-24-2022"; TimeSpan d = new DateTime(2022, 10, 24) - DateTime.Now;
Label4.Text = "Days Remaining For Diwali Vacation:"+d.Days.ToString(); TimeSpan d1 = new DateTime(2022, 12, 31) - DateTime.Now;
Label5.Text = "Days Remaining for New Year:"+d1.Days.ToString(); if (Calendar1.SelectedDate.ToShortDateString() == "9-24-2022") Label3.Text = "<b>Diwali Festival Start</b>";
if (Calendar1.SelectedDate.ToShortDateString() == "9-24-2022") Label3.Text = "<b>Diwali Festival End</b>";
}
protected void Calendar1_DayRender(object sender, System.Web.UI.WebControls.DayRenderEventArgs e)
{
if (e.Day.Date.Day == 5 && e.Day.Date.Month == 9)
{
e.Cell.BackColor = System.Drawing.Color.Yellow; Label lbl = new Label();
lbl.Text = "<br>Teachers Day!"; e.Cell.Controls.Add(lbl); Image g1 = new Image(); g1.ImageUrl = "td.jpg"; g1.Height = 20;
g1.Width = 20; e.Cell.Controls.Add(g1);

}
if (e.Day.Date.Day == 13 && e.Day.Date.Month == 9)
{
Calendar1.SelectedDate = new DateTime(9,24,2022); Calendar1.SelectedDates.SelectRange(Calendar1.SelectedDate, Calendar1.SelectedDate.AddDays(10));
Label lbl1 = new Label(); lbl1.Text = "<br>Diwali!"; e.Cell.Controls.Add(lbl1);
}
}
protected void btnReset_Click(object sender, EventArgs e)
{
Label1.Text = ""; Label2.Text = ""; Label3.Text = ""; Label4.Text = ""; Label5.Text = "";
Calendar1.SelectedDates.Clear();
}
protected void Calendar1_SelectionChanged(object sender, EventArgs e)
{
Label1.Text = "Your Selected Date:" + Calendar1.SelectedDate.Date.ToString();
}

}
}

                                    //3.b	Treeview control:

                                    //Code:
 

<?xml version="1.0" encoding="utf-8" ?>
<studentdetail>
<student>
<sid>1</sid>
 
<sname>Tushar</sname>
<sclass>TYIT</sclass>
</student>
<student>
<sid>2</sid>
<sname>Sonali</sname>
<sclass>TYCS</sclass>
</student>
<student>
<sid>3</sid>
<sname>Yashashree</sname>
<sclass>TYIT</sclass>
</student>
<student>
<sid>4</sid>
<sname>Vedshree</sname>
<sclass>TYCS</sclass>
</student>
</studentdetail> Default2.aspx
<form id="form1" runat="server">
<div>
Treeview control navigation:<asp:TreeView ID = "TreeView1" runat = "server" Width =
"150px" ImageSet="Arrows">
<HoverNodeStyle Font-Underline="True" ForeColor="#5555DD" />
<Nodes>
<asp:TreeNode Text = "ASP.NET Practs" Value = "New Node">
<asp:TreeNode Text = "Calendar Control" Value = "RED" NavigateUrl="~/calndrCtrl.aspx">
</asp:TreeNode>
<asp:TreeNode Text = "Constructor Overloading" Value = "GREEN" NavigateUrl="~/clsconstrc.aspx"></asp:TreeNode>
<asp:TreeNode NavigateUrl="~/singleInh.aspx" Text="Inheritance" Value="BLUE"></asp:TreeNode>
<asp:TreeNode NavigateUrl="~/clsProp.aspx" Text="Class Properties" Value="Class
Properties"></asp:TreeNode>
 
</asp:TreeNode>
</Nodes>
<NodeStyle Font-Names="Tahoma" Font-Size="10pt" ForeColor="Black" HorizontalPadding="5px" NodeSpacing="0px" VerticalPadding="0px" />
<ParentNodeStyle Font-Bold="False" />
<SelectedNodeStyle Font-Underline="True" ForeColor="#5555DD" HorizontalPadding="0px" VerticalPadding="0px" />
</asp:TreeView>
<br />
Fetch Datalist Using XML data : </div>
<asp:DataList ID="DataList1" runat="server">
<ItemTemplate>
<table class = "table" border="1">
<tr>
<td>Roll Num : <%# Eval("sid") %><br /> Name : <%# Eval("sname") %><br /> Class : <%# Eval("sclass")%>
</td>
</tr>
</table>
</ItemTemplate>
</asp:DataList>
 
                                    //Design Page:

                                    //Code:
 

using System.Data;
public partial class _Default : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{
if (!IsPostBack)
{
BindData();
}
}
protected void BindData()
{
DataSet ds = new DataSet(); ds.ReadXml(Server.MapPath("stdetail.xml")); if (ds != null && ds.HasChanges())
{
DataList1.DataSource = ds; DataList1.DataBind();
 
}
else
{
DataList1.DataBind();
}
}
}

                                            //4.aVALIDATION


                                            //SOURCE CODE:

<body>
<form id="form1" runat="server">
<div>

NAME&nbsp;&nbsp; :<asp:TextBox ID="TextBox1" runat="server" CausesValidation="True"></asp:TextBox>
<asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" ControlToValidate="TextBox1" ErrorMessage="Enter Your Name Proper"></asp:RequiredFieldValidator>
<br />
<br />
PASSWORD :<asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
<br />
<br />
RE-ENTER PASSWORD&nbsp; :<asp:TextBox ID="TextBox3" runat="server"></asp:TextBox>
<asp:CompareValidator ID="CompareValidator1" runat="server" ControlToCompare="TextBox3" ControlToValidate="TextBox2" ErrorMessage="Password Does Not Match"></asp:CompareValidator>
<br />
<br />
EMAIL&nbsp;&nbsp;&nbsp; :<asp:TextBox ID="TextBox4" runat="server"></asp:TextBox>
<asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" ControlToValidate="TextBox4" ErrorMessage="Enter Your Mail Id Properly" ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-
.]\w+)*"></asp:RegularExpressionValidator>

</div>
<p>
AGE&nbsp;&nbsp;&nbsp; :<asp:TextBox ID="TextBox5"
runat="server"></asp:TextBox>
<asp:RangeValidator ID="RangeValidator1" runat="server" ControlToValidate="TextBox5" ErrorMessage="User Must Be 18+" MaximumValue="60" MinimumValue="10"></asp:RangeValidator>
</p>
<p>
 

</p>
<p>
 
GAMES :<asp:CheckBoxList ID="CheckBoxList1" runat="server">
<asp:ListItem>Cricket</asp:ListItem>
<asp:ListItem>Football</asp:ListItem>
<asp:ListItem>Soccer</asp:ListItem>
<asp:ListItem>Rugbby</asp:ListItem>
</asp:CheckBoxList> GENDER :
 
<asp:RadioButton ID="RadioButton1" runat="server" OnCheckedChanged="RadioButton1_CheckedChanged" Text="MALE" />
<asp:RadioButton ID="RadioButton2" runat="server" Text="FEMALE" />
 
</p>
<p>

/>
</p>
 


<asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="SUBMIT"
 
<asp:Label ID="Label1" runat="server" Text="Label"></asp:Label>
</form>
</body>







//BUTTON CLICK EVENT CODE :









protected void Button1_Click(object sender, EventArgs e)
{
Label1.Text += "your name is :" + TextBox1.Text + "<br>"; Label1.Text += "your mail id is :" + TextBox4.Text + "<br>"; Label1.Text += "your age is :" + TextBox5.Text + "<br>";

}

                                        //4.b ADROTATOR




XML File Code
<Advertisements>
<Ad>
<ImageUrl>rose1.jpg</ImageUrl>
<NavigateUrl>http://www.1800flowers.com</NavigateUrl>
<AlternateText>

Order flowers, roses, gifts and more
</AlternateText>
<Impressions>20</Impressions>
<Keyword>flowers</Keyword>
</Ad>
<Ad>
<ImageUrl>rose2.jpg</ImageUrl>
<NavigateUrl>http://www.babybouquets.com.au</NavigateUrl>
<AlternateText>Order roses and flowers</AlternateText>
<Impressions>20</Impressions>
<Keyword>gifts</Keyword>
</Ad>
<Ad>
<ImageUrl>rose3.jpeg</ImageUrl>
 
<NavigateUrl>http://www.flowers2moscow.com</NavigateUrl>
<AlternateText>Send flowers to Russia</AlternateText>
<Impressions>20</Impressions>
<Keyword>russia</Keyword>
</Ad>
</Advertisements>


                                          //Default.aspx:


<asp:AdRotator ID="AdRotator1" runat="server" DataSourceID="XmlDataSource1" />
<asp:XmlDataSource ID="XmlDataSource1" runat="server" DataFile="~/ADFILE.xml"></asp:XmlDataSource>

 



 
                                        //4.c User control
 
MyUserControl.ascx
<%@ Control Language="C#" AutoEventWireup="true" CodeFile="MyUserControl.ascx.cs" Inherits="MyUserControl" %>
<h3>This is User Contro1 </h3>
<table>
<tr>
<td>Name</td>
<td>
<asp:TextBox ID="txtName" runat="server"></asp:TextBox>
</td>
</tr>
<tr>
<td>City</td>
<td><asp:TextBox ID="txtcity" runat="server"></asp:TextBox></td>
</tr>

<tr>
<td></td>
<td>
</td>
</tr>
<tr>
 
<td></td>
<td>
<asp:Button ID="txtSave" runat="server" Text="Save" onclick="txtSave_Click" />
</td>
</tr>
</table><br />
<asp:Label ID="Label1" runat="server" ForeColor="White" Text=" "></asp:Label>

MyUserControl.ascx.cs
protected void txtSave_Click(object sender, EventArgs e)
{
Label1.Text = "Your Name is " + txtName.Text + " and you are from " + txtcity.Text;
}

UserControlDisplay.aspx
<%@ Page Language="C#" AutoEventWireup="true" CodeFile="UserControlDisplay.aspx.cs" Inherits="UserControlDisplay" %>
<%@ Register Src="~/MyUserControl.ascx" TagPrefix="uc" TagName="Student"%>
<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<title></title>
</head>
<body>
<form id="form1" runat="server">
<div>
<uc:Student ID="studentcontrol" runat="server" />
</div>
</form>
</body>
</html>

 



 
                                            // 5.a	MASTER PAGE
                                            // HTML CODE :


 
<!DOCTYPE html>
<html xmlns="http://www.w3.org/1999/xhtml">
<head>
<title></title>
</head>
<body bgcolor ="green">
<font color="black">
D.B.J.College Chiplun is one of the College Under Mumbai University.<br> The college was estabhished in the 1965 and<br>
Is located at S.K Patil Nagar Mumbai Gao Highway Chiplun(West)
</font>

</body>
</html>


                                         //MASTER PAGE SOURCE CODE :


<body>
<form id="form1" runat="server">
<div>
DEPARTMENT OF INFORMATION TECHNOLOGY<br />
<table class="auto-style1">
<tr>
 


Chiplun.jpg" />
 
<td>
 

<asp:Image ID="Image1" runat="server" ImageUrl="~/D.B.J.-College-
 
</td>
</tr>
<tr>
<td>&nbsp;</td>
</tr>
<tr>
<td>
<asp:HyperLink ID="HyperLink1" runat="server"
NavigateUrl="~/HtmlPage1.html">AboutUs</asp:HyperLink>
</td>
</tr>
</table>
<asp:ContentPlaceHolder ID="ContentPlaceHolder1" runat="server">

</asp:ContentPlaceHolder>
</div>
</form>
</body>

                                            // 5.b	STATE MANAGEMENT
                                            // SOURCE CODE:



<body>
<form id="form1" runat="server">
<div>

Department of information technology<br />
<br />
USERNAME :<asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
<br />
 
<br />
PASSWORD :<asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
<br />
<br />
<br />
<asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Login" />
<br />
<br />
<asp:Label ID="Label1" runat="server"></asp:Label>

</div>
</form>
</body>

                                            // SESSION LOGIN:

<body>
<form id="form1" runat="server">
<div>

Department of information technology<br />
<br />
USERNAME :<asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
<br />
<br />
PASSWORD :<asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
<br />
<br />
<br />
<asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Login" />
<br />
<br />
<asp:Label ID="Label1" runat="server"></asp:Label>

</div>
</form>
</body>

                                                //BUTTON EVENT :



protected void Button1_Click(object sender, EventArgs e)
{
if (TextBox1.Text == "yash" && TextBox2.Text == "3033")
{
Session["uname"] = TextBox1.Text; Response. Redirect("display.aspx");

}
else
{
Label1.Text = "Invalid Detail";

}

{
Response.Redirect("WebForm1.aspx");
}
}

                                 //STATEMANAGEMENT CODE:

<body>
<form id="form1" runat="server">
 
<div>

Department of information technology<br />
<br />
USERNAME :<asp:TextBox ID="TextBox1" runat="server"></asp:TextBox>
<br />
<br />
PASSWORD :<asp:TextBox ID="TextBox2" runat="server"></asp:TextBox>
<br />
<br />
<br />
<asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="Login" />
<br />
<br />
<asp:Label ID="Label1" runat="server"></asp:Label>

</div>
</form>
</body>

                                     //BUTTON EVENT:

namespace statemanagement
{
public partial class WebForm1 : System.Web.UI.Page
{



protected void Button1_Click(object sender, EventArgs e)
{
Response.Redirect("display.aspx?name=" + TextBox1.Text + "&city=" + TextBox2.Text);
}
}
}
                                        // DISPLAY:

<body>
<form id="form1" runat="server">
<div>

hi , WELCOME<br />
<br />
<asp:Button ID="Button1" runat="server" OnClick="Button1_Click" Text="SHOW" />
<br />
<br />
<asp:Label ID="Label1" runat="server"></asp:Label>
<br />
<br />
<asp:Label ID="Label2" runat="server"></asp:Label>

</div>
</form>
</body>


                                       //BUTTON CODE:




public partial class display : System.Web.UI.Page
 
{
protected void Page_Load(object sender, EventArgs e)
{

}

protected void Button1_Click(object sender, EventArgs e)
{
Label1.Text = "name=" + Request.QueryString["name"].ToString(); Label2.Text = "city=" + Request.QueryString["city"].ToString();
}
}
}

                                           //Hidden:


namespace statemanagement

{
public partial class hidden : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{
if (String.IsNullOrEmpty(HiddenField1.Value)) Label1.Text = HiddenField1.Value;
}
}
}

                // 7:- DataBinding and dropdowenlist
                // 7 (a): Create a web application to display Databinding using Dropdownlist control.
                // Default.aspx (create a web page with following design):-
                // 1.	Create a web page with DropDownList control, one Button and one Label control.
                // 2.	Use code to bind the data to DropDownList.


Default.aspx.cs:-
using System; usingSystem.Collections.Generic; usingSystem.Linq; usingSystem.Web; usingSystem.Web.UI; usingSystem.Web.UI.WebControls; usingSystem.Data; usingSystem.Data.SqlClient; usingSystem.Configuration;
 
public partial class DBDropDown : System.Web.UI.Page
{

protected void Page_Load(object sender, EventArgs e)
{

if (IsPostBack == false)

{
stringconnStr =
ConfigurationManager.ConnectionStrings["connStr"].Connecti onString;
SqlConnection con = new SqlConnection(connStr);
SqlCommandcmd = new SqlCommand("Select Distinct City from Customer", con);
con.Open();

SqlDataReader reader = cmd.ExecuteReader(); DropDownList1.DataSource = reader;
DropDownList1.DataTextField = "City"; DropDownList1.DataBind();
reader.Close();	con.Close();

}	} protected void Button1_Click(object sender, EventArgs e)
{
Label1.Text = "The You Have Selected : " + DropDownList1.SelectedValue;	}}



                        //7.bDETAILSVIEW AND FROMVIEW CONTROL



using System; using System.Data; using System.Data.SqlClient; using System.Linq;
using System.Web; using System.Web.UI; using System.Web.UI.WebControls; using
 
System.Collections.Generic; namespace WebApplication1
{
public partial class WebForm1 : System.Web.UI.Page
{
SqlDataAdapter da = new SqlDataAdapter(); SqlConnection con = new SqlConnection();
SqlCommand cmd = new SqlCommand(); DataSet ds = new DataSet(); string str;
protected void Page_Load(object sender, EventArgs e)
{
con.ConnectionString = "Data
Source=(LocalDB)\\v11.0;AttachDbFilename=C:\\Users\\SAHIL\\Documents\\Stud ents.mdf;Inte
grated Security=True;Connect Timeout=30"; con.Open(); Label4.Text = "Connected To Server"; con.Close();
}
protected void Button1_Click(object sender, EventArgs e)
{
str = "insert into stud_mast values(" + TextBox1.Text + " , ' " + TextBox2.Text + " ' , " + TextBox3.Text + ")";
con.Open();

cmd = new SqlCommand(str,con); cmd.ExecuteNonQuery(); con.Close();
Label4.Text = " Save Successfull ";


TextBox1.Text = " "; TextBox2.Text
= " "; TextBox3.Text = " ";

}
protected void DropDownList1_SelectedIndexChanged(object sender, EventArgs e)
 
{
}
protected void Button4_Click(object sender, EventArgs e)
{
str = "select * from stud_mast where stud_id= " + DropDownList1.Text + " "; da = new SqlDataAdapter(str, con); ds = new DataSet(); da.Fill(ds,"stud_mast");
TextBox1.Text = ds.Tables["stud_mast"].Rows[0]["stud_id"].ToString(); TextBox2.Text = ds.Tables["stud_mast"].Rows[0]["stud_name"].ToString(); TextBox3.Text = ds.Tables["stud_mast"].Rows[0]["phn_no"].ToString();
}
protected void Button2_Click(object sender, EventArgs e)
{
str = "update stud_mast set stud_name= ' " + TextBox2.Text + " ', phn_no= "
+TextBox3.Text+" where stud_id= "+DropDownList1.Text+" "; con.Open();

cmd = new SqlCommand(str, con); cmd.ExecuteNonQuery(); con.Close();
Label4.Text = " Update Successfull ";
}
protected void Button3_Click(object sender, EventArgs e)
{
str = "delete from stud_mast where stud_id=" + DropDownList1.Text + " "; con.Open();

cmd = new SqlCommand(str, con); cmd.ExecuteNonQuery(); con.Close();
Label4.Text = " Update Successfull ";
}}}


                
                    //8)a) Create a web application to demonstrate Various uses and properties of SQL Data Source.


                    // 1.	Filenewwebsiteempty websitename itok
                    // 2.	Right click on website madeadd new itemsql server databasename itaddyes
                    // 3.	Right click on table In server exploreradd new tableadd columnssave the table
                    
                    // 4.	Right click on table made show table dataadd values
                    // 5.	Right click on websiteadd new itemwebformname it
                    // 6.	Go to design viewadd form for login
                    // 7.	Add sqldatasourceconfigure it
                    // 8.	Write code using




System; using
System.Collections.Generi c; using System.Linq; using System.Web; using System.Web.UI; using System.Web.UI.WebContr ols;
public partial class LoginModule : System.Web.UI.Page
{
protected void Page_Load(object sender, EventArgs e)
{
}
protected void btnSignUp_Click(object sender, EventArgs e)
{
 

                                                        //CODE:
 

SqlDataSource1.InsertParameters["Username"].DefaultValue = txtUserName.Text; SqlDataSource1.InsertParameters["Password"].DefaultValue = txtPassword.Text; SqlDataSource1.Insert();
lblResult.Text = "User Added";
}
}
 
                                                        // 10 AJAX

                                                        // DESIGN :

                                                        // CODE:


using System; usingSystem.Collections.Generic; usingSystem.Linq; usingSystem.Web; usingSystem.Web.UI; usingSystem.Web.UI.WebControls; usingSystem.Data.SqlClient;

publicpartialclassajaxform : System.Web.UI.Page
{
protectedvoidPage_Load(object sender, EventArgs e)
{

}
protectedvoid Button1_Click(object sender, EventArgs e)
{
SqlConnection con = newSqlConnection(@"Data Source=.\sqlexpress;InitialCatalog=BreakingNews;Integrated Security=True");
con.Open();
SqlCommand com = newSqlCommand("select * from news", con);SqlDataReaderdr = com.ExecuteReader();
while (dr.Read())
{
Label1.Text +=dr[1].ToString()+"<br>";
}
con.Close();
}
}
