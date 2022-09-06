This is c, produced by makeinfo version 6.8 from c.texi.

Copyright © 2022 Richard Stallman and Free Software Foundation, Inc.

   (The work of Trevis Rothwell and Nelson Beebe has been assigned or
licensed to the FSF.)

     Permission is granted to copy, distribute and/or modify this
     document under the terms of the GNU Free Documentation License,
     Version 1.3 or any later version published by the Free Software
     Foundation; with the Invariant Sections being “GNU General Public
     License,” with the Front-Cover Texts being “A GNU Manual,” and with
     the Back-Cover Texts as in (a) below.  A copy of the license is
     included in the section entitled “GNU Free Documentation License.”

     (a) The FSF’s Back-Cover Text is: “You have the freedom to copy and
     modify this GNU manual.  Buying copies from the FSF supports it in
     developing GNU and promoting software freedom.”
INFO-DIR-SECTION Programming
START-INFO-DIR-ENTRY
* C: (c).       GNU C Language Intro and Reference Manual
END-INFO-DIR-ENTRY


Indirect:
c-1: 1056
c-2: 302420
c-3: 603689

Tag Table:
(Indirect)
Node: Top1056
Node: The First Example22504
Node: Recursive Fibonacci23053
Node: Function Header25753
Node: Function Body26283
Node: Stack29824
Node: Iterative Fibonacci31868
Node: Complete Program37483
Node: Complete Example38267
Node: Complete Explanation39002
Node: Complete Line-by-Line42387
Node: Compile Example43939
Node: Storage45110
Node: Beyond Integers46049
Node: Float Example46591
Node: Array Example48374
Node: Array Example Call50630
Node: Array Example Variations53049
Node: Lexical Syntax55102
Node: English56076
Node: Characters57790
Ref: Characters-Footnote-158936
Node: Whitespace59058
Node: Comments60662
Node: Identifiers63377
Node: Operators/Punctuation64830
Node: Line Continuation67514
Node: Arithmetic68898
Node: Basic Arithmetic71181
Node: Integer Arithmetic72425
Node: Integer Overflow74914
Node: Unsigned Overflow75846
Node: Signed Overflow77050
Node: Mixed Mode79194
Node: Division and Remainder80522
Node: Numeric Comparisons82981
Node: Shift Operations84216
Node: Bits Shifted In85184
Node: Shift Caveats86541
Node: Shift Hacks87928
Node: Bitwise Operations88842
Node: Assignment Expressions91958
Node: Simple Assignment94338
Node: Lvalues95773
Node: Modifying Assignment97351
Node: Increment/Decrement99136
Node: Postincrement/Postdecrement100519
Node: Assignment in Subexpressions101958
Node: Write Assignments Separately103401
Node: Execution Control Expressions104620
Node: Logical Operators105310
Node: Logicals and Comparison107465
Node: Logicals and Assignments108690
Node: Conditional Expression110231
Node: Conditional Rules110730
Node: Conditional Branches112002
Node: Comma Operator113975
Node: Uses of Comma114651
Node: Clean Comma115644
Node: Avoid Comma116870
Node: Binary Operator Grammar117764
Ref: Binary Operator Grammar-Footnote-1120820
Node: Order of Execution121192
Node: Reordering of Operands122224
Node: Associativity and Ordering123090
Node: Sequence Points124670
Node: Postincrement and Ordering126475
Node: Ordering of Operands127609
Node: Optimization and Ordering129288
Node: Primitive Types130318
Node: Integer Types131143
Node: Basic Integers132071
Node: Signed and Unsigned Types133523
Ref: Signed and Unsigned Types-Footnote-1134676
Node: Narrow Integers134992
Node: Integer Conversion136383
Node: Boolean Type137762
Node: Integer Variations138264
Node: Floating-Point Data Types140003
Node: Complex Data Types142331
Ref: Complex Data Types-Footnote-1144369
Node: The Void Type144555
Node: Other Data Types145336
Node: Type Designators146101
Node: Constants148149
Node: Integer Constants149349
Node: Integer Const Type151074
Node: Floating Constants152459
Node: Imaginary Constants154600
Node: Invalid Numbers156185
Node: Character Constants156909
Node: String Constants159362
Node: UTF-8 String Constants163097
Node: Unicode Character Codes163960
Node: Wide Character Constants165456
Node: Wide String Constants167360
Node: Type Size169857
Node: Pointers172377
Node: Address of Data174196
Node: Pointer Types175098
Node: Pointer Declarations175656
Node: Pointer Type Designators176947
Node: Pointer Dereference177858
Node: Null Pointers178998
Node: Invalid Dereference180274
Node: Void Pointers181528
Node: Pointer Comparison183686
Node: Pointer Arithmetic185244
Node: Pointers and Arrays188753
Node: Pointer Arithmetic Low Level190543
Node: Pointer Increment/Decrement192442
Node: Pointer Arithmetic Drawbacks195863
Node: Pointer-Integer Conversion197367
Node: Printing Pointers198614
Node: Structures199106
Node: Referencing Fields204008
Node: Dynamic Memory Allocation205426
Node: Field Offset207760
Node: Structure Layout208295
Node: Packed Structures210700
Node: Bit Fields211778
Node: Bit Field Packing213405
Node: const Fields215440
Node: Zero Length216729
Node: Flexible Array Fields217532
Node: Overlaying Structures219099
Node: Structure Assignment220371
Node: Unions221400
Node: Packing With Unions223849
Node: Cast to Union225607
Node: Structure Constructors226765
Node: Unnamed Types as Fields228070
Node: Incomplete Types229055
Node: Intertwined Incomplete Types230513
Node: Type Tags231425
Node: Arrays234090
Node: Accessing Array Elements235605
Node: Declaring an Array237281
Node: Strings239031
Node: Array Type Designators241592
Node: Incomplete Array Types242155
Node: Limitations of C Arrays243713
Node: Multidimensional Arrays246044
Node: Constructing Array Values249373
Node: Arrays of Variable Length250690
Node: Enumeration Types253322
Node: Defining Typedef Names256491
Node: Statements259201
Node: Expression Statement261221
Node: if Statement262427
Node: if-else Statement263252
Node: Blocks264162
Node: return Statement266655
Node: Loop Statements267481
Node: while Statement268577
Node: do-while Statement269580
Node: break Statement270280
Node: for Statement271808
Node: Example of for272855
Node: Omitted for-Expressions273997
Node: for-Index Declarations275811
Node: continue Statement276820
Node: switch Statement278323
Node: switch Example280902
Node: Duffs Device282412
Node: Case Ranges283643
Node: Null Statement284309
Node: goto Statement284881
Node: Local Labels288631
Node: Labels as Values291744
Ref: Labels as Values-Footnote-1292625
Node: Label Value Uses292821
Node: Label Value Caveats294097
Node: Statement Exprs295549
Node: Variables297603
Node: Variable Declarations299803
Node: Declaring Arrays and Pointers302420
Node: Combining Variable Declarations303591
Node: Initializers304537
Node: Designated Inits307688
Node: Auto Type310386
Node: Local Variables311599
Ref: Local Variables-Footnote-1313364
Node: File-Scope Variables313481
Node: Static Local Variables314832
Node: Extern Declarations315948
Node: Allocating File-Scope317964
Node: auto and register319684
Node: Omitting Types320508
Node: Type Qualifiers320966
Node: const322065
Node: volatile324331
Node: restrict Pointers326489
Node: restrict Pointer Example328141
Node: Functions330174
Node: Function Definitions331148
Node: Function Parameter Variables332159
Node: Forward Function Declarations334713
Node: Static Functions335643
Node: Arrays as Parameters336912
Node: Array Parm Pointer337386
Node: Passing Array Args338591
Node: Array Parm Qualifiers340873
Node: Structs as Parameters342379
Node: Function Declarations343859
Node: Function Calls347618
Node: Function Call Semantics348962
Node: Function Pointers350581
Node: Declaring Function Pointers351567
Node: Assigning Function Pointers353705
Node: Calling Function Pointers354733
Node: The main Function355649
Node: Values from main357285
Node: Command-line Parameters358501
Node: Environment Variables359870
Node: Advanced Definitions361358
Node: Variable-Length Array Parameters362035
Node: Variable Number of Arguments364211
Node: Nested Functions368311
Node: Inline Function Definitions372843
Node: Obsolete Definitions376903
Node: Old GNU Inlining377371
Node: Old-Style Function Definitions378340
Node: Compatible Types380299
Ref: Compatible Types-Footnote-1382930
Node: Type Conversions382965
Node: Explicit Type Conversion383630
Node: Assignment Type Conversions385229
Node: Argument Promotions387013
Ref: Argument Promotions-Footnote-1388056
Node: Operand Promotions388280
Node: Common Type388875
Node: Scope390104
Node: Preprocessing393097
Node: Preproc Overview393541
Node: Directives395147
Node: Preprocessing Tokens396682
Node: Header Files400920
Node: include Syntax402814
Node: include Operation404702
Node: Search Path406583
Node: Once-Only Headers409196
Node: Computed Includes410933
Node: Macros414120
Node: Object-like Macros415541
Node: Function-like Macros419504
Node: Macro Arguments421435
Node: Stringification425738
Node: Concatenation429053
Node: Variadic Macros432561
Ref: Variadic Macros-Footnote-1436555
Ref: Variadic Macros-Footnote-2436580
Node: Predefined Macros436605
Node: Undefining and Redefining Macros443755
Node: Directives Within Macro Arguments445651
Node: Macro Pitfalls446605
Node: Misnesting447136
Node: Operator Precedence Problems448253
Node: Swallowing the Semicolon450144
Node: Duplication of Side Effects452219
Node: Macros and Auto Type454332
Node: Self-Referential Macros455597
Node: Argument Prescan458054
Node: Conditionals461872
Node: Conditional Uses463596
Node: Conditional Syntax464999
Node: ifdef465362
Node: if468719
Node: defined471228
Node: else472602
Node: elif473225
Node: Deleted Code474663
Node: Diagnostics475966
Node: Line Control477173
Node: Null Directive479451
Node: Integers in Depth479733
Node: Integer Representations480188
Ref: Integer Representations-Footnote-1484271
Node: Maximum and Minimum Values484434
Node: Floating Point in Depth486032
Node: Floating Representations486666
Node: Floating Type Specs488457
Node: Special Float Values489859
Ref: subnormal numbers492022
Node: Invalid Optimizations493947
Node: Exception Flags495443
Ref: fetestexcept496267
Node: Exact Floating-Point496784
Node: Rounding497844
Node: Rounding Issues499991
Node: Significance Loss501391
Node: Fused Multiply-Add504487
Node: Error Recovery506405
Node: Exact Floating Constants509334
Node: Handling Infinity511408
Node: Handling NaN513241
Node: Signed Zeros516499
Node: Scaling by the Base517214
Node: Rounding Control518553
Node: Machine Epsilon520236
Node: Complex Arithmetic525260
Node: Round-Trip Base Conversion528914
Node: Further Reading531048
Node: Compilation539179
Node: Directing Compilation541577
Node: Pragmas542040
Node: Pragma Basics542413
Node: Severity Pragmas546525
Node: Optimization Pragmas549152
Node: Static Assertions551504
Node: Type Alignment553347
Node: Aliasing556513
Node: Aliasing Alignment558082
Node: Aliasing Length559092
Node: Aliasing Type Rules560093
Node: Digraphs563995
Node: Attributes564636
Node: Signals567668
Node: GNU Free Documentation License569380
Node: Symbol Index594722
Node: Concept Index603689

End Tag Table


Local Variables:
coding: utf-8
End:
