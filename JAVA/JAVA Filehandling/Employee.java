import java.util.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.io.*;
import java.io.Serializable;

class emp_detail implements Serializable {
    int eid, eage, econt;
    String ename;
    private static final long serialVersionUID = 1L;

    void detail(int eid, String ename, int eage, int econt) {
        this.eid = eid;
        this.ename = ename;
        this.eage = eage;
        this.econt = econt;
    }
}

class add_record extends JFrame implements ActionListener {
    JLabel id, name, age, contact, warning;
    TextField t_id, t_name, t_age, t_cont;
    JButton sub, back, add_an;
    emp_detail ed = new emp_detail();
    ArrayList<emp_detail> emp_List = new ArrayList<emp_detail>();
    File f = new File("emp_record.txt");

    add_record() {
        id = new JLabel("EID");
        id.setBounds(100, 50, 60, 40);
        add(id);

        t_id = new TextField();
        t_id.setBounds(170, 60, 200, 20);
        add(t_id);

        name = new JLabel("NAME");
        name.setBounds(100, 100, 60, 40);
        add(name);

        t_name = new TextField();
        t_name.setBounds(170, 110, 200, 20);
        add(t_name);

        age = new JLabel("AGE");
        age.setBounds(100, 150, 60, 40);
        add(age);

        t_age = new TextField();
        t_age.setBounds(170, 160, 200, 20);
        add(t_age);

        contact = new JLabel("CONTACT");
        contact.setBounds(100, 200, 60, 40);
        add(contact);

        t_cont = new TextField();
        t_cont.setBounds(170, 210, 200, 20);
        add(t_cont);

        warning = new JLabel("SUBMIT SUCCESSFUL");

        add(warning);

        sub = new JButton("SUBMIT");
        sub.setBounds(300, 300, 100, 40);
        sub.addActionListener((ActionListener) this);
        add(sub);

        back = new JButton("EXIT");
        back.setBounds(100, 300, 100, 40);
        back.addActionListener((ActionListener) this);
        add(back);

        add_an = new JButton("ADD ONTHER RECORD");
        add_an.addActionListener((ActionListener) this);
        add(add_an);

        setSize(500, 400);
        setTitle("ADD RECORD");
        setLocationRelativeTo(null);
        setLayout(null);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {

        if (e.getSource() == sub) {
            warning.setText("SUBMIT SUCCESSFUL");
            warning.setBounds(200, 20, 200, 20);
            sub.setBounds(150, 300, 100, 40);
            back.setBounds(20, 300, 100, 40);
            add_an.setBounds(280, 300, 180, 40);
            sub.setEnabled(false);
            add(add_an);
            repaint();
            try {
                write_data();
            } catch (IOException t) {
                System.out.println(t);
            } catch (ClassNotFoundException t) {
                System.out.println(t);
            }

        }
        if (e.getSource() == back) {
            dispose();
        }
        if (e.getSource() == add_an) {
            warning.setText("");
            t_id.setText("");
            t_name.setText("");
            t_age.setText("");
            t_cont.setText("");
            remove(add_an);
            repaint();
            sub.setBounds(300, 300, 100, 40);
            back.setBounds(100, 300, 100, 40);
            sub.setEnabled(true);

        }
    }

    public void write_data() throws FileNotFoundException, IOException, ClassNotFoundException {
        String g_id, g_name, g_age, g_cont;
        g_id = t_id.getText();
        g_name = t_name.getText();
        g_age = t_age.getText();
        g_cont = t_cont.getText();
        int eid = Integer.parseInt(g_id);
        int eage = Integer.parseInt(g_age);
        int econt = Integer.parseInt(g_cont);
        ed.detail(eid, g_name, eage, econt);
        if (f.exists()) {
            FileInputStream fis = new FileInputStream(f);
            ObjectInputStream ois = new ObjectInputStream(fis);
            emp_List = (ArrayList<emp_detail>) ois.readObject();
            ois.close();
            fis.close();
        }
        FileOutputStream fos = new FileOutputStream(f);
        ObjectOutputStream oos = new ObjectOutputStream(fos);
        emp_List.add(ed);
        oos.writeObject(emp_List);
        oos.close();
        fos.close();
    }
}

class display_record extends JFrame implements ActionListener {
    JButton back;
    ArrayList<emp_detail> emp_list = new ArrayList<emp_detail>();

    display_record() throws FileNotFoundException, IOException, ClassNotFoundException {
        back = new JButton("BACK");
        back.setBounds(10, 10, 100, 40);
        back.addActionListener((ActionListener) this);
        add(back);

        File f = new File("emp_record.txt");
        FileInputStream fis = new FileInputStream(f);
        ObjectInputStream ois = new ObjectInputStream(fis);

        emp_list = (ArrayList<emp_detail>) ois.readObject();
        ois.close();
        fis.close();

        String[][] str = new String[emp_list.size()][4];
        for (int i = 0; i < emp_list.size(); i++) {
            emp_detail em_d = new emp_detail();
            em_d = emp_list.get(i);
            str[i][0] = String.valueOf(em_d.eid);
            str[i][1] = em_d.ename;
            str[i][2] = String.valueOf(em_d.eage);
            str[i][3] = String.valueOf(em_d.econt);
        }
        String[] heading = { "ID", "NAME", "AGE", "CONTACT NO." };

        JTable jt = new JTable(str, heading);
        JScrollPane scrollPane = new JScrollPane(jt);
        scrollPane.setBounds(20, 80, 450, 100);
        add(scrollPane);

        setSize(500, 400);
        setTitle("EMPLOYEES RECORDS");
        setLocationRelativeTo(null);
        setLayout(null);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == back) {
            dispose();
        }
    }

}

class search_re extends JFrame implements ActionListener {
    ArrayList<emp_detail> emp_list = new ArrayList<>();
    private JButton search, back, sr_ano;
    private JLabel id, warning;
    private JTextField t_id;
    private JTable jt;
    JScrollPane scrollPane;

    search_re() {
        warning = new JLabel("ENTER THE EMPLOYEE ID");
        warning.setBounds(180, 5, 250, 30);
        add(warning);

        id = new JLabel("ID");
        id.setBounds(160, 30, 50, 40);
        add(id);

        t_id = new JTextField();
        t_id.setBounds(180, 40, 160, 20);
        add(t_id);

        search = new JButton("SEARCH");
        search.setBounds(210, 80, 100, 40);
        search.addActionListener((ActionListener)this);
        add(search);

        back = new JButton("EXIT");
        back.setBounds(20, 310, 100, 40);
        back.addActionListener((ActionListener)this);
        add(back);

        sr_ano = new JButton("SEARCH ANOTHER RECORED");
        sr_ano.addActionListener((ActionListener)this);
        add(sr_ano);

        setSize(500, 400);
        setTitle("SEARCH RECORD");
        setLocationRelativeTo(null);
        setLayout(null);
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == search) {
            String g_id;
            sr_ano.setBounds(240, 310, 220, 40);
            int a = Integer.parseInt(t_id.getText());
            File f = new File("emp_record.txt");
            try {
                FileInputStream fis = new FileInputStream(f);
                ObjectInputStream ois = new ObjectInputStream(fis);
                emp_list = (ArrayList<emp_detail>) ois.readObject();
                ois.close();
                fis.close();
                for (emp_detail emp_loop : emp_list) {
                    if (a == emp_loop.eid) {
                        String[][] str = new String[emp_list.size()][4];
                        for (int i = 0; i < 1; i++) {
                            str[i][0] = String.valueOf(emp_loop.eid);
                            str[i][1] = emp_loop.ename;
                            str[i][2] = String.valueOf(emp_loop.eage);
                            str[i][3] = String.valueOf(emp_loop.econt);
                        }
                        String[] heading = { "ID", "NAME", "AGE", "CONTACT NO." };

                        jt = new JTable(str, heading);
                        scrollPane = new JScrollPane(jt);
                        scrollPane.setBounds(20, 140, 450, 50);
                        add(scrollPane);
                        break;
                    }
                }
            } catch (IOException t) {
                System.out.println(t);
            } catch (ClassNotFoundException t) {
                System.out.println(t);
            }

        }
        if(e.getSource()==sr_ano)
        {
            t_id.setText("");
            remove(scrollPane);
            repaint();
        }
        if(e.getSource()==back)
        {
            dispose();
        }

    }
}
class delete_rec extends JFrame implements ActionListener
{
    ArrayList<emp_detail> emp_list = new ArrayList<emp_detail>();
    private JTable jt;
    JScrollPane scrollPane;
    JButton delete,back,search;
    TextField t_id;
    JLabel id,warning;
    int j=0;
    delete_rec()
    {
        warning=new JLabel("ENTER THE ID WHICH YOU WANTE TO DELETE");
        warning.setBounds(120,5,300,20);
        add(warning);

        id=new JLabel("ID");
        id.setBounds(130,30,30,20);
        add(id);

        t_id=new TextField();
        t_id.setBounds(160,30,200,20);
        add(t_id);

        search=new JButton("SEARCH");
        search.setBounds(180,60,150,30);
        search.addActionListener(this);
        add(search);

        back=new JButton("EXIT");
        back.setBounds(20,320,100,30);
        back.addActionListener(this);
        add(back);

        delete=new JButton("DELETE");
        delete.setBounds(260,320,200,30);
        delete.addActionListener(this);
        delete.setEnabled(false);
        add(delete);

        setSize(500, 400);
        setTitle("DELETE RECORD");
        setLocationRelativeTo(null);
        setLayout(null);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e)
    {
        
        if(e.getSource()==search)
        {
            int a = Integer.parseInt(t_id.getText());
            File f = new File("emp_record.txt");
            try {
                FileInputStream fis = new FileInputStream(f);
                ObjectInputStream ois = new ObjectInputStream(fis);
                emp_list = (ArrayList<emp_detail>) ois.readObject();
                ois.close();
                fis.close();
                
                for (emp_detail emp_loop : emp_list) {
                    if (a == emp_loop.eid) {
                        delete.setEnabled(true);
                        String[][] str = new String[emp_list.size()][4];
                        for (int i = 0; i < 1; i++) {
                            str[i][0] = String.valueOf(emp_loop.eid);
                            str[i][1] = emp_loop.ename;
                            str[i][2] = String.valueOf(emp_loop.eage);
                            str[i][3] = String.valueOf(emp_loop.econt);
                        }
                        String[] heading = { "ID", "NAME", "AGE", "CONTACT NO." };

                        jt = new JTable(str, heading);
                        scrollPane = new JScrollPane(jt);
                        scrollPane.setBounds(20, 140, 450, 50);
                        add(scrollPane);
                        break;
                    }
                    j++;
                }
            } catch (IOException t) {
                System.out.println(t);
            } catch (ClassNotFoundException t) {
                System.out.println(t);
            }

        }
        if(e.getSource()==delete)
        {
            remove(id);
            remove(t_id);
            remove(search);
            remove(scrollPane);
            repaint();
            warning.setText("RECORD DELETED");
            warning.setBounds(200,50,300,30);
            emp_list.remove(j);
            try
            {
            File f=new File("emp_record.txt");
            FileOutputStream fos=new FileOutputStream(f);
            ObjectOutputStream oos=new ObjectOutputStream(fos);
            oos.writeObject(emp_list);
            oos.close();
            fos.close();
           
            }
            catch(IOException t)
            {
                System.out.println(t);
            }
           

        }
        if(e.getSource()==back)
        {
            dispose();
        }
       
    }
     
    
}

class update_rec extends JFrame implements ActionListener
{
    ArrayList<emp_detail> emp_list = new ArrayList<emp_detail>();
    private JTable jt;
    JScrollPane scrollPane;
    JButton update,back,search;
    TextField t_id;
    JLabel id,warning;
    int j=0;
    int a;
    update_rec()
    {
        warning=new JLabel("ENTER THE ID WHICH YOU WANTE TO UPDATE");
        warning.setBounds(120,5,300,20);
        add(warning);

        id=new JLabel("ID");
        id.setBounds(130,30,30,20);
        add(id);

        t_id=new TextField();
        t_id.setBounds(160,30,200,20);
        add(t_id);

        search=new JButton("SEARCH");
        search.setBounds(180,60,150,30);
        search.addActionListener(this);
        add(search);

        back=new JButton("EXIT");
        back.setBounds(20,320,100,30);
        back.addActionListener(this);
        add(back);

        update=new JButton("UPDATE");
        update.setBounds(260,320,200,30);
        update.addActionListener(this);
        update.setEnabled(false);
        add(update);

        setSize(500, 400);
        setTitle("UPDATE RECORD");
        setLocationRelativeTo(null);
        setLayout(null);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e)
    {
        
        if(e.getSource()==search)
        {
            a = Integer.parseInt(t_id.getText());
            File f = new File("emp_record.txt");
            try {
                FileInputStream fis = new FileInputStream(f);
                ObjectInputStream ois = new ObjectInputStream(fis);
                emp_list = (ArrayList<emp_detail>) ois.readObject();
                ois.close();
                fis.close();
                
                for (emp_detail emp_loop : emp_list) {
                    if (a == emp_loop.eid) {
                        update.setEnabled(true);
                        String[][] str = new String[emp_list.size()][4];
                        for (int i = 0; i < 1; i++) {
                            str[i][0] = String.valueOf(emp_loop.eid);
                            str[i][1] = emp_loop.ename;
                            str[i][2] = String.valueOf(emp_loop.eage);
                            str[i][3] = String.valueOf(emp_loop.econt);
                        }
                        String[] heading = { "ID", "NAME", "AGE", "CONTACT NO." };

                        jt = new JTable(str, heading);
                        scrollPane = new JScrollPane(jt);
                        scrollPane.setBounds(20, 140, 450, 50);
                        add(scrollPane);
                        break;
                    }
                    j++;
                }
            } catch (IOException t) {
                System.out.println(t);
            } catch (ClassNotFoundException t) {
                System.out.println(t);
            }

        }

        if(e.getSource()==back)
        {
            dispose();
        }
        if(e.getSource()==update)
        {
            update_detail up_de=new update_detail(a);
            t_id.setText("");
            remove(scrollPane);
            repaint();
        }

    }
} 
class update_detail extends JFrame implements ActionListener
{
    ArrayList<emp_detail> emp_list = new ArrayList<emp_detail>();
    int a;
    JButton update,sub;
    JLabel id,name,age,contact,warning;
    TextField t_id,t_name,t_age,t_cont;
    update_detail(int a)
    {
        this.a=a;
        warning=new JLabel("UPDATE SUCCESSFULL");
        add(warning);

        id = new JLabel("EID");
        id.setBounds(100, 50, 60, 40);
        add(id);

        t_id = new TextField();
        t_id.setBounds(170, 60, 200, 20);
        add(t_id);

        name = new JLabel("NAME");
        name.setBounds(100, 100, 60, 40);
        add(name);

        t_name = new TextField();
        t_name.setBounds(170, 110, 200, 20);
        add(t_name);

        age = new JLabel("AGE");
        age.setBounds(100, 150, 60, 40);
        add(age);

        t_age = new TextField();
        t_age.setBounds(170, 160, 200, 20);
        add(t_age);

        contact = new JLabel("CONTACT");
        contact.setBounds(100, 200, 60, 40);
        add(contact);

        t_cont = new TextField();
        t_cont.setBounds(170, 210, 200, 20);
        add(t_cont);

        sub = new JButton("UPDATE");
        sub.setBounds(220, 250, 100, 30);
        sub.addActionListener(this);
        add(sub);

        update = new JButton("UPDATE ONTHER RECORD");
        update.setBounds(240,320,240,30);
        update.addActionListener((ActionListener) this);
        update.setEnabled(false);
        add(update);


        setSize(500, 400);
        setTitle("UPDATE DETAILS");
        setLocationRelativeTo(null);
        setLayout(null);
        setVisible(true);
    }
    public void actionPerformed(ActionEvent e)
    {
        if(e.getSource()==update)
        {
            dispose();
        }
        if(e.getSource()==sub)
        {
            warning.setBounds(180,5,300,20);
            update.setEnabled(true);
            sub.setEnabled(false);
            getdata();

        }
    }
    public void getdata()
    {
        int i=0;
        emp_detail ed=new emp_detail();
        String g_id, g_name, g_age, g_cont;
        g_id = t_id.getText();
        g_name = t_name.getText();
        g_age = t_age.getText();
        g_cont = t_cont.getText();
        int eid = Integer.parseInt(g_id);
        int eage = Integer.parseInt(g_age);
        int econt = Integer.parseInt(g_cont);
        ed.detail(eid, g_name, eage, econt);

        File f=new File("emp_record.txt");
        
        try
        {
            FileInputStream fis=new FileInputStream(f);
            ObjectInputStream ois=new ObjectInputStream(fis);
            emp_list = (ArrayList<emp_detail>) ois.readObject();
            ois.close();
            fis.close();
            for (emp_detail emp_loop : emp_list) 
            {
                if (a == emp_loop.eid)
                {
                    break;
                }
                i++;
            }
            emp_list.set(i,ed);
            FileOutputStream fos=new FileOutputStream(f);
            ObjectOutputStream oos=new ObjectOutputStream(fos);
            oos.writeObject(emp_list);
            oos.close();
            fos.close();
        }    
        catch(FileNotFoundException t)
        {
            System.out.println(t);
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
public class Employee extends JFrame implements ActionListener {
    JButton add_rec, up_rec, del_rec, sea_rec, dis_rec;

    Employee() {
        add_rec = new JButton("ADD RECORD");
        add_rec.setBounds(170, 40, 150, 50);
        add_rec.addActionListener((ActionListener) this);
        add(add_rec);

        dis_rec = new JButton("DISPLAY RECORD");
        dis_rec.setBounds(170, 100, 150, 50);
        dis_rec.addActionListener((ActionListener) this);
        add(dis_rec);

        up_rec = new JButton("UPDATE RECORD");
        up_rec.setBounds(170, 160, 150, 50);
        up_rec.addActionListener( this);
        add(up_rec);

        del_rec = new JButton("DELETE RECORD");
        del_rec.setBounds(170, 220, 150, 50);
        del_rec.addActionListener((ActionListener) this);
        add(del_rec);

        sea_rec = new JButton("SEARCH RECORD");
        sea_rec.setBounds(170, 280, 150, 50);
        sea_rec.addActionListener((ActionListener) this);
        add(sea_rec);

        setSize(500, 400);
        setTitle("EMPLOYEE MANAGEMENT");
        setLocationRelativeTo(null);
        setLayout(null);
        setVisible(true);

    }

    public void actionPerformed(ActionEvent e) {
        if (e.getSource() == add_rec) {
            add_record ad = new add_record();
        }
        if (e.getSource() == dis_rec) {
            try {
                display_record dr = new display_record();
            } catch (IOException t) {
                System.out.println(t);
            } catch (ClassNotFoundException t) {
                System.out.println(t);
            }

        }
        if (e.getSource() == sea_rec) {
            search_re search = new search_re();
        }
        if(e.getSource()==del_rec)
        {
            delete_rec dele_rec=new delete_rec();
        }
        if(e.getSource()==up_rec)
        {
            update_rec upda_rec=new update_rec();
        }
    }

    public static void main(String[] args) {
        Employee E = new Employee();

    }
}
