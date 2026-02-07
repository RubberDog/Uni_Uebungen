result = sigaction(sig, act, oact)

sigaction weist einem signal sig eine neue Behandlung bei Empfang des signals zu. Die neue Behandlung ist in einem struct act festgelegt, die bisherige wird, zur eventuellen späteren Verwendung in oact gespeichert - sofern oact nicht NULL ist.

result speichert der return-wert von sigaction; 0 bei Erfolg, wenn die neue Behandlung akzeptiert wurde, -1 bei Misserfolg.
