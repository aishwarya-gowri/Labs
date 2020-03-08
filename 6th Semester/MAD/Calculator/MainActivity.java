package com.example.lab2;
import androidx.appcompat.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.view.View.OnClickListener;
import android.widget.EditText;
import android.widget.TextView;
import android.widget.Button;
import android.text.TextUtils;


public class MainActivity extends AppCompatActivity implements OnClickListener {

    EditText num1,num2;
    Button Add,sub,mul,div;
    TextView Result;
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        num1=(EditText)findViewById(R.id.editText1);
        num2=(EditText)findViewById(R.id.editText2);
        Add=(Button)findViewById(R.id.Add);
        sub=(Button)findViewById(R.id.Sub);
        mul=(Button)findViewById(R.id.Mul);
        div=(Button)findViewById(R.id.Div);
        Result=(TextView)findViewById(R.id.textView);

        Add.setOnClickListener(this);
        sub.setOnClickListener(this);
        mul.setOnClickListener(this);
        div.setOnClickListener(this);

    }
    @Override
    public void onClick(View v)
    {
        float n1=0,n2=0,res=0;
        String oper="";

        if(TextUtils.isEmpty(num1.getText().toString())|| TextUtils.isEmpty(num2.getText().toString()))
        {
            Result.setText("Please Enter both the numbers.");
            return;
        }
        n1=Float.parseFloat(num1.getText().toString());
        n2=Float.parseFloat(num2.getText().toString());
        switch(v.getId())
        {
            case R.id.Add:
                res=n1+n2;
                oper+="+";
                break;
            case R.id.Sub:
                res=n1-n2;
                oper+="-";
                break;
            case R.id.Mul:
                res=n1*n2;
                oper+="*";
            case R.id.Div:
                res=n1/n2;
                oper+="/";
            default:
                break;
        }
        Result.setText(n1+oper+n2+"="+res);
    }

}
