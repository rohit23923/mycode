import java.util.*;
import java.awt.*;
import java.awt.event.*;
import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOError;
import java.io.IOException;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.io.Serializable;
// import java.awt.event.ActionEvent;
// import java.awt.event.ActionListener;
class emp implements Serializable
{
    int id,c_no; 
    String name;
    public void emp_rec_get(int id,String name,int c_no)
    {
        this.id=id;
        this.name=name;
        this.c_no=c_no;
    }

}
class menu_frame extends Frame implements ActionListener
{
    Label l;
    Button menu,add_rec,disp_rec,up_rec;
    menu_frame()
    {
        add_rec=new Button("ADD RECORD");
        add_rec.setBounds(220,170,150,50);
        add_rec.addActionListener(this);

        disp_rec=new Button("DISPLAY RECORD");
        disp_rec.setBounds(220,230,150,50);
        disp_rec.addActionListener(this);

        up_rec=new Button("UPDATE RECORD");
        up_rec.setBounds(220,290,150,50);
        up_rec.addActionListener(this);


        add(add_rec);
        add(disp_rec);
        add(up_rec);

        setTitle("EMPLOYEE MANAGEMENT MENU");
        setSize(600,600);
        setLayout(null);
        setVisible(true);

        addWindowListener(new WindowAdapter() {
        public void windowClosing(WindowEvent we) {
            dispose();
        }});
       
    }
    public void actionPerformed(ActionEvent e)
    {
        
        if(e.getSource()==add_rec)
        {
            add_rec_frame adf=new add_rec_frame();
        }
        if(e.getSource()==disp_rec)
        {
            try{
                disp_rec_frame rdf=new disp_rec_frame();
            }
            catch(IOException t)
            {
                System.out.println(t);
            }
            catch(ClassNotFoundException t)
            {
                System.out.println(t);
            }
        }
        if(e.getSource()==up_rec)
        {
            
            try{
                up_rec_frame upf=new up_rec_frame();
            }
            catch(IOException t)
            {
                System.out.println(t);
            }
            catch(ClassNotFoundException t)
            {
                System.out.println(t);
            }

        }

    }
}

class add_rec_frame extends Frame implements ActionListener
{
    TextField tf_id,tf_name,tf_cno;
    Label add_rec_frame_label,l_id,l_name,l_cno;
    Button add_rec;
    
    ArrayList<emp> emp_list=new ArrayList<emp>();
    add_rec_frame()
    {
        add_rec_frame_label=new Label("ENTER EMPLOYEE DETAILS");
        add_rec_frame_label.setBounds(170,50,200,30);
        add(add_rec_frame_label);

        l_id=new Label("ID No: ");
        l_id.setBounds(50,90,50,20);
        add(l_id);

        tf_id=new TextField();
        tf_id.setBounds(160,90,150,20);
        add(tf_id);

        l_name=new Label("NAME: ");
        l_name.setBounds(50,130,50,20);
        add(l_name);

        tf_name=new TextField();
        tf_name.setBounds(160,130,150,20);
        add(tf_name);

        l_cno=new Label("CONTACT NO: ");
        l_cno.setBounds(50,160,100,20);
        add(l_cno);

        tf_cno=new TextField();
        tf_cno.setBounds(160,160,150,20);
        add(tf_cno);

        add_rec =new Button("ADD RECORD");
        add_rec.setBounds(180,200,100,50);
        add_rec.addActionListener(this);
        add(add_rec);

        setSize(370,300);
        setLayout(null);
        setVisible(true);
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                System.exit(0);
            }
        });
       
    }
    public void actionPerformed(ActionEvent e) 
    {
        if(e.getSource()==add_rec)
        {
            add_rec.setEnabled(false);
           add_rec_frame_label.setText("RECORD SAVED SUCCESSFULLY");
           add_rec_frame_label.setBounds(100,50,200,30);
           add_rec.setLabel("SAVED");
           
            try{
                this.get_data();
            }
            catch(IOException t)
            {
                System.out.println(t);
            }
            catch(ClassNotFoundException t)
            {
                System.out.println(t);
            }
            tf_id.setText("*****");
           tf_name.setText("*****");
           tf_cno.setText("*****");

        }
    }
    emp h1=new emp();
    public void get_data() throws FileNotFoundException,IOException,ClassNotFoundException
    {
        String s_id,s_name,s_cno;
        s_id=tf_id.getText();
        s_name=tf_name.getText();
        s_cno=tf_cno.getText();
        File f=new File("data.txt");
        FileInputStream fis=new FileInputStream(f);
        ObjectInputStream ois=new ObjectInputStream(fis);
        emp_list=(ArrayList<emp>)ois.readObject();
        ois.close();
        fis.close();

        h1.emp_rec_get(Integer.parseInt(s_id),s_name,Integer.parseInt(s_cno));
        emp_list.add(h1);
        
        FileOutputStream fos=new FileOutputStream(f);
        ObjectOutputStream oos=new ObjectOutputStream(fos);
        oos.writeObject(emp_list);
        oos.close();
        fos.close();

    }
}

class disp_rec_frame extends Frame
{
    Label l,l_id,l_name,l_cno;
    ArrayList<emp> emp_list=new ArrayList<emp>();
    disp_rec_frame() throws IOException, ClassNotFoundException
    {
        l=new Label("ALL EMPLOYEES RECORDS");
        l.setBounds(130,50,250,20);
        add(l);

        l_id=new Label("ID");
        l_id.setBounds(50,80,100,30);
        add(l_id);

        
        l_name=new Label("NAME");
        l_name.setBounds(160,80,100,30);
        add(l_name);

        l_cno=new Label("CONTACT NO");
        l_cno.setBounds(310,80,100,30);
        add(l_cno);

        setSize(520,600);
        setLayout(null);
        setVisible(true);
        disp_rec();
    }

    public void disp_rec()throws IOException,ClassNotFoundException,HeadlessException
    {
        File f=new File("data.txt");
        FileInputStream fis=new FileInputStream(f);
        ObjectInputStream ois=new ObjectInputStream(fis);
        emp_list=(ArrayList<emp>)ois.readObject();
        int  y=0;
        Label l_id,l_name,l_cno;
        
        for(emp emp_loop:emp_list)
        {
            emp h2=new emp();
            h2=emp_loop;
            String s_id=Integer.toString(h2.id);
            String s_name=h2.name;
            String s_cno=Integer.toString(h2.c_no);
            l_id=new Label("");
            l_id.setText(s_id);
            l_id.setBounds(50,110+y,100,20);
            add(l_id);

            l_name=new Label("");
            l_name.setText(s_name);
            l_name.setBounds(160,110+y,100,30);
            add(l_name);

            l_cno=new Label("");
            l_cno.setText(s_cno);
            l_cno.setBounds(310,110+y,100,30);
           add(l_cno);
           
            y=y+30;

        }
    }
}

class up_rec_frame extends Frame
{
    
   
   
    up_rec_frame() throws IOException,ClassNotFoundException
    {    
        disp_rec_frame d=new disp_rec_frame();
        setTitle("UPDATE RECORD");
        setSize(600,600);
        setLayout(null);
        setVisible(true);
    }
}
class front_emp extends Frame implements ActionListener
{
    Label l;
    Button menu;
    
    front_emp()
    {
        l=new Label("WELCOME TO THE EMPLOYEE MANAGEMENT SYSTEM");
        l.setBounds(180,100,500,50);
        menu=new Button("MENU");
        menu.addActionListener(this);
        menu.setBounds(270,200,70,50);
        add(l);
        add(menu);
        setTitle("EMPLOYEE MANAGEMENT");
        setSize(600, 600);
        setLayout(null);
        setVisible(true);
        
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                System.exit(0);
            }
        });   

    }

    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource()==menu)
        {
            menu_frame mf=new menu_frame();
        }

    }
    public static void main(String[] args)
    {
        front_emp h=new front_emp();

    }
}