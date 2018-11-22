#include <sample.pb.h>
#include <pb_encode.h>
#include <pb_decode.h>

void setup()
{
  Serial.begin(115200);
  delay(10);
}

void loop()
{

  tobalr_testmessage msg = tobalr_testmessage_init_zero;
  uint8_t buffer[128];
  pb_ostream_t outStream = pb_ostream_from_buffer(buffer, sizeof(buffer));

  msg.temperature = 1.11;
  msg.humidity = 2.22;
  msg.batteryVoltage = 3.33;

  Serial.println("Encoding to:");

  if (!pb_encode(&outStream, tobalr_testmessage_fields, &msg))
  {
    Serial.println("failed to encode proto");
    Serial.println(PB_GET_ERROR(&outStream));
    return;
  }

  Serial.write(buffer, outStream.bytes_written);
  Serial.println("");
  
  delay(5000);
  Serial.println("Decoding to:");
  tobalr_testmessage recivedMsg = tobalr_testmessage_init_zero;
  pb_istream_t inStream = pb_istream_from_buffer(buffer, outStream.bytes_written);
  if (!pb_decode(&inStream, tobalr_testmessage_fields, &recivedMsg))
  {
    Serial.println("failed to decode proto");
    Serial.println(PB_GET_ERROR(&inStream));
    return;
  }
  Serial.print("temperature: ");
  Serial.print(recivedMsg.temperature);
  Serial.print(", humidity: ");
  Serial.print(recivedMsg.humidity);
  Serial.print(", batteryVoltage: ");
  Serial.println(recivedMsg.batteryVoltage);

  delay(5000);
}
