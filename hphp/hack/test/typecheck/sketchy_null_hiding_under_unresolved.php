<?hh // strict
// Copyright 2004-present Facebook. All Rights Reserved.

class Derp {
  const type T = array<string, mixed>;

  public static function f1(): int {
    try {
      $a = self::f2();
      $b = idx($a, 'rows', array());
      $b = self::assertIsT($b);
      while (true) {
        $c = idx($b, 'c');
        if ($c) {
        }
      }
    } catch (Exception $_) {
    }
    return 1;
  }

  private static function assertIsT(mixed $a): self::T {
    // UNSAFE
  }

  private static function f2(): array<string, mixed> {
    // UNSAFE
  }

}
