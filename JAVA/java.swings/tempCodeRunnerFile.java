import javax.swing.*;
import java.awt.Color;
public class frameButton extends JFrame
{

    frameButton()
    {
        JButton b=new JButton("click");
        b.setBounds(150,200,100,40);
        add(b);
        setSize(400,500);
        setLocationRelativeTo(null);
        getContentPane().setBackground(null);