import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
public class OnlineText extends JFrame implements ActionListener
{
    JButton s,next,submit;
    JLabel q;
    ButtonGroup bg;
    JRadioButton r,r1;
    int c=1,count=0;
    OnlineText()
    {
        q=new JLabel("WELCOME TO QUIZ");
        q.setBounds(50,50,550,50);
        q.setFont(new Font("Serif",Font.PLAIN,18));
        add(q);

        s=new JButton("START");
        s.setBounds(200,200,80,40);
        s.addActionListener((ActionListener) this);
        add(s);

        next=new JButton("NEXT");
        next.addActionListener((ActionListener)this);
        add(next);
       
        r=new JRadioButton();
        add(r);
        bg=new ButtonGroup();
        bg.add(r);

        r1=new JRadioButton();
        add(r1);
        bg.add(r1);

        submit=new JButton("SUBMIT");
        submit.addActionListener((ActionListener)this);
       
        setSize(700,400);
        setTitle("Online Test");
        setLocationRelativeTo(null);
        setLayout(null);
        setVisible(true);
    }
    void questions()
    {
        if(c==1)
        {
            q.setText("Q1. C is a case sensetive language ?");
            r.setText("YES");
            r1.setText("NO");
            bg.clearSelection();
        }
        if(c==2)
        {
            q.setText("Q2. First prime minister of INDIA ?");
            r.setText("NEHRU");
            r1.setText("MODI");
            bg.clearSelection();
        }
        if(c==3)
        {
            q.setText("Q3. What is the extension of java code files?");
            r.setText("java");
            r1.setText("JS");
            bg.clearSelection();
        }
        if(c==4)
        {
            q.setText("Q4. which of the following is not an OOps concept in java?");
            r.setText("Encapsulation");
            r1.setText("Compilation");
            bg.clearSelection();
        }
        if(c==5)
        {
            q.setText("Q5. What is the extension of compiled java classes?");
            r.setText(".txt");
            r1.setText("class");
            bg.clearSelection();
        }
        if(c==6)
        { 
            q.setText("Q7. Which of the following is a super class of every class in java ?");
            r.setText("Abstract class");
            r1.setText("Object class");
            bg.clearSelection();
        }
        if(c==7)
        {
            q.setText("Q7. Which of the below is not a java profiler?");
            r.setText("Jconsole");
            r1.setText("JVM");
            bg.clearSelection();
        }
        if(c==8)
        {
            q.setText("Q8. Which one of the following is not an access modifier?");
            r.setText("Protected");
            r1.setText("Void");;
            bg.clearSelection();
        }
        if(c==9)
        {
            q.setText("Q9. Who invented java programming?");
            r.setText("James Gosling");
            r1.setText("Dennis Ritchie");
            bg.clearSelection();
        }
        if(c==10)

        {
            q.setText("Q10. Which one of the following is not a java feature?");
            r.setText("Portable");
            r1.setText("Use of pointers");
            bg.clearSelection();
        }
        if(c==11)
        {
            remove(r);
            remove(r1);
            q.setText("SUBMIT TO SEE RESULT");
            submit.setBounds(310,200,80,40);
            add(submit);
            remove(next);
            repaint();
        }
    }
    boolean result()
    {
        if(c==1)
        {
            return(r.isSelected());
        }
        if(c==2)
        { 
            return(r.isSelected());
        }
        if(c==3)
        {
            return(r.isSelected());
        }
        if(c==4)
        {
            return(r1.isSelected());
        }
        if(c==5)
        {
            return(r1.isSelected());
        }
        if(c==6)
        {
            return(r1.isSelected());
        }
        if(c==7)
        {
            return(r1.isSelected());
        }
        if(c==8)
        {
            return(r1.isSelected());
        }
        if(c==9)
        {
            return(r.isSelected());
        }
        if(c==10)
        {
            return(r1.isSelected());
        }
        return false;
    }
    
    public void actionPerformed(ActionEvent e) 
    {
        
        if(e.getSource()==s)
        {  
            questions();
            r.setBounds(120,100,120,70);
            r1.setBounds(250,100,120,70);
            next.setBounds(200,250,80,40);
            remove(s);
            repaint();

        }
        
        if(e.getSource()==next)
        {
            if(result())
            {
                count++;
            }
            c++;
            questions();  
        }
        if(e.getSource()==submit)
        {
            q.setText("Your Score is out 10 ");
            String count1=String.valueOf(count);
            submit.setText(count1);
        }
    }
   

    
       public static void main(String[] args)
    {
        OnlineText test=new OnlineText();

    }

    

   
    
}
