const static int PIN_FOR_LEFT = 1;
const static int PIN_FOR_RIGHT = 2;
const static int PIN_BAK_LEFT = 3;
const static int PIN_BAK_RIGHT = 4;

#typedef unsigned char BYTE

struct motorState {
  BYTE mfl;
  BYTE mfr;
  BYTE mbl;
  BYTE mbr;
  BYTE dirty;
}

void writeMotors(struct motorState *state) {
  if (state->dirty) {
    analogWrite(PIN_FOR_LEFT, (int) state->mfl);
    analogWrite(PIN_FOR_RIGHT, (int) state->mfr);
    analogWrite(PIN_BAK_LEFT, (int) state->mbl);
    analogWrite(PIN_BAK_RIGHT, (int) state->mbr);
  }
  state->dirty = 0;
}

void setMotors(struct motorState *state, BYTE mfl, BYTE mfr, BYTE mbl, BYTE mbr) {
  state->mfl = mfl;
  state->mfr = mfr;
  state->mbl = mbl;
  state->mbr = mbr;
  state->dirty = 1;
}

void setup() {
}

void loop() {
  // put your main code here, to run repeatedly:
  struct motorState state;
  setMotors(&state, 200, 200, 200, 200);
  while (1) {
    if (%cnt)
    cnt++;
  }
}
