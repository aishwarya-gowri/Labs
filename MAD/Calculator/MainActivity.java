package com.example.labprograms.lab3;

import androidx.annotation.NonNull;
import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.text.TextUtils;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import org.w3c.dom.Text;

public class MainActivity extends AppCompatActivity implements OnClickListener{
    TextView r1;
    EditText e1,e2;
    Button b1,a,s,m,d;
    String res="",oper="";
    float n1,n2,n3;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        a=(Button)findViewById(R.id.add);
        s=(Button)findViewById(R.id.sub);
        m=(Button)findViewById(R.id.mul);
        d=(Button)findViewById(R.id.div);
        e1=(EditText)findViewById(R.id.editText);
        e2=(EditText)findViewById(R.id.editText2);
        r1=(TextView)findViewById(R.id.res);

        a.setOnClickListener(this);
        s.setOnClickListener(this);
        m.setOnClickListener(this);
        d.setOnClickListener(this);



    }

    @Override
    public void onClick(View v) {
        if(TextUtils.isEmpty(e1.getText().toString())||TextUtils.isEmpty(e2.getText().toString()))
            return;
        n1=Float.parseFloat(e1.getText().toString());
        n2=Float.parseFloat(e2.getText().toString());

        switch(v.getId())
        {
            case R.id.add:
                n3=n1+n2;
                oper="+";
                break;
            case R.id.sub:
                n3=n1-n2;
                oper="-";
                break;
            case R.id.mul:
                n3=n1*n2;
                oper="*";
                break;
            case R.id.div:
                n3=n1/n2;
                oper="/";
                break;
            default:
                break;
        }
        r1.setText(n1+"  "+oper+"  "+n2+" = "+n3);
    }
}
