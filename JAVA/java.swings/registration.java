import javax.swing.*;
import java.awt.*;
public class registration extends JFrame
{
    registration()
    {
        JLabel heading=new JLabel("Registration Form");
        heading.setBounds(180,10,350,50);
        add(heading);

        JLabel name=new JLabel("NAME");
        name.setBounds(50,50,100,60);
        add(name);

        JTextField tfname=new JTextField();
        tfname.setBounds(200,70,100,15);
        add(tfname);

        JLabel cont=new JLabel("CONTACT NO.");
        cont.setBounds(50,100,100,60);
        add(cont);

        JTextField confild=new JTextField();
        confild.setBounds(200,125,100,15);
        add(confild);

        JLabel age=new JLabel("AGE");
        age.setBounds(50,150,100,60);
        add(age);

        JTextField agefield=new JTextField();
        agefield.setBounds(200,170,100,15);
        add(agefield);

        JLabel select_gender=new JLabel("SELECT GENDER");
        select_gender.setBounds(50,200,150,60);
        add(select_gender);

        ButtonGroup bg=new ButtonGroup();

        JRadioButton rButton=new JRadioButton("MALE");
        rButton.setBounds(200,200,100,40);
        add(rButton);
        bg.add(rButton);

        JRadioButton lButton=new JRadioButton("FEMALE");
        lButton.setBounds(300,200,100,40);
        add(lButton);
        bg.add(lButton);

        JRadioButton oButton=new JRadioButton("OTHER");
        oButton.setBounds(400,200,100,40);
        add(oButton);
        bg.add(oButton);

        JLabel address=new JLabel("ADDRESS");
        address.setBounds(50,250,100,60);
        add(address);

        JTextArea textArea=new JTextArea();
        textArea.setBounds(200,250,220,130);
        add(textArea);

        JButton submit=new JButton("SUBMIT");
        submit.setBounds(200,400,100,40);
        add(submit);

        getContentPane().setBackground(null);
        setSize(500,500);
        setTitle("Registration form");
        setLocationRelativeTo(null);
        setLayout(null);
        setVisible(true);
    }
    public static void main(String[] args)
    {
        registration r=new registration();
    }
}