/*                                      60 KEY MATRIX / LAYOUT MAPPING

  ╭────────────────────────────────┬────────────────────────────────╮
  │  0   1   2   3   4   5         │          6   7   8   9  10  11 │
  │ 12  13  14  15  16  17  18     │     19  20  21  22  23  24  25 │
  │ 26  27  28  29  30  31  32     │     33  34  35  36  37  38  39 │
  │ 40  41  42  43  44  45  46  47 │ 48  49  50  51  52  53  54  55 │
  │ 56  57  58  59      60  61  62 │ 63  64  65      66  67  68  69 │
  ╰────────────────────────────────┴────────────────────────────────╯
  ╭────────────────────────────────┬───────────────────────────────╮
  │ LN5 LN4 LN3 LN2 LN1 LN0        │       RN0 RN1 RN2 RN3 RN4 RN5 │
  │ LT5 LT4 LT3 LT2 LT1 LT0 --     │    -- RT0 RT1 RT2 RT3 RT4 RT5 │
  │ LM5 LM4 LM3 LM2 LM1 LM0 --     │    -- RM0 RM1 RM2 RM3 RM4 RM5 │
  │ LB5 LB4 LB3 LB2 LB1 LB0 --  -- │ -- -- RB0 RB1 RB2 RB3 RB4 RB5 │
  │ LH4 LH3 LH2 LH1     LH0 --  -- │ -- -- RH0     RH1 RH2 RH3 RH4 │
  ╰────────────────────────────────┴───────────────────────────────╯
  */

#pragma once

#define LN0  5  // left-number row
#define LN1  4
#define LN2  3
#define LN3  2
#define LN4  1
#define LN5  0

// Define rows for the right number keys (RN)
#define RN0  11  // right-number row
#define RN1  10
#define RN2   9
#define RN3   8
#define RN4   7
#define RN5   6

// Define rows for the left modifier keys (LT)
#define LT0  17  // left modifier row (e.g., Ctrl, Alt)
#define LT1  16
#define LT2  15
#define LT3  14
#define LT4  13
#define LT5  12

// Define rows for the right modifier keys (RT) mirrored from LT
#define RT0  20  // right modifier row (mirrored from LT)
#define RT1  21
#define RT2  22
#define RT3  23
#define RT4  24
#define RT5  24

// Define rows for the lower modifier keys (LM)
#define LM0  30  // lower modifier row (e.g., Ctrl, Shift)
#define LM1  29
#define LM2  28
#define LM3  27
#define LM4  26
#define LM5  25

// Define rows for the right modifier keys (RM) mirrored from LM
#define RM0  34  // right modifier row (mirrored from LM)
#define RM1  35
#define RM2  36
#define RM3  37
#define RM4  38
#define RM5  39

// Define rows for the lower thumb keys (LB)
#define LB0  45  // lower thumb key row
#define LB1  44
#define LB2  43
#define LB3  42
#define LB4  41
#define LB5  40

// Define rows for the right thumb keys (RB) mirrored from LB
#define RB0  51  // right thumb key row (mirrored from LB)
#define RB1  52
#define RB2  53
#define RB3  54
#define RB4  55



#define LH0  60
#define LH1  59
#define LH2  58
#define LH3  57
#define LH4  56


#define RH0  65  // right thumb key row (mirrored from LB)
#define RH1  66
#define RH2  67
#define RH3  68
#define RH4  69
