# Green Efficiency Analysis

## Measurement Methodology

I compiled the comparison program with the required GCC flags and ran it three times. Each run gave me a time for the naive implementation and a time for the single-pass implementation. I added the three times for each implementation and divided by three to get its average. I then divided the naive average by the single-pass average to compare how long they took.

For the instrumentation task, I used `clock()` to take CPU time readings and stored them in variables of type `clock_t`. Subtracting the start reading from the end reading gave me the difference in ticks. I cast the difference to `double` before dividing by `CLOCKS_PER_SEC` so the result could keep fractions of a second. The program reported a total time and separate times for building, processing and reducing the dataset.

## Observed Performance Differences

The naive implementation averaged **2.741374 seconds**, and the single-pass implementation averaged **0.000106 seconds**. In these runs, the naive implementation took about **25,862 times as long**. When I looked at the code, I noticed the naive implementation used nested loops. Those loops can repeat work across the input, which helps explain the difference I observed.

The instrumented program reported **0.000730 seconds** in total. Building the dataset took **0.000290 seconds**, processing took **0.000309 seconds**, and reducing it to a checksum took **0.000131 seconds**. Processing took the longest in this run, but it was only **0.000019 seconds** ahead of building the dataset.

## Relation Between Runtime and Energy Consumption

The single-pass implementation used less CPU time in my runs. If the CPU drew similar power while running both implementations, spending less time doing the work could mean using less energy. I used CPU time as an indirect indicator because the program measured time with `clock()`. My results show a difference in CPU time. I would need to measure energy separately to find out how much either implementation used.

## Limitations of the Experiment

I ran the comparison three times, so the averages only describe those runs. More runs would help me see how consistent the timings are. Changing the input size would answer a separate question about how each implementation behaves as the workload grows. I also recorded one set of phase timings, so I would need more runs to see whether processing consistently takes longer than building.

## Practical Engineering Takeaway

If I were investigating the comparison program further, I would start with the naive version’s nested loops and compare what they do with the work in the single-pass version. For the instrumented program, I would repeat the measurements before choosing which phase to improve. Processing came first in the recorded run, but the difference between processing and building was small enough that I would want to see whether it repeats. After making a change, I would measure again under the same conditions to check whether it helped.
